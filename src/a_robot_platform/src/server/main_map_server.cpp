#include "../map/mapreadandwrite.h"
#include "../map/map_deal.h"
#include "../common/map_process.h"

const std::string map_frame_id="map";

int main(int argc, char **argv)
{
  // Set up ROS.
  ros::init(argc, argv, "main_global_location");
  ROS_INFO("package_name:a_robot_platform  node_name:main_map_server");
  
  //by hulu add
  int  row = 0, col = 0, map_count = 0, k = 0;
	cv::String map_path = "/home/hulu/ros/zw/distributed_robot_sys/src/a_robot_platform/map/N301524mapnoimu.pgm";  
	uchar ** ptr = NULL;
	ptr = map_deal(&row,&col,map_path,&map_count); 
  ROS_INFO("row=%d  col=%d ",row,col);

  ros::NodeHandle n;
  nav_msgs::OccupancyGrid grid;
  nav_msgs::OccupancyGrid bmap;
  nav_msgs::OccupancyGrid map_two_value;  //二值化膨胀处理之后的网格地图

  const char * stem;
  if(argc>1)
    stem = argv[1];
  else
    stem= "/home/zw/distributed_robot_sys/img/map/gtest1";
  if(! zw::PgmAndYamlToOccupancy(grid,stem))
    return -1;

  grid.info.map_load_time=ros::Time::now();
  grid.header.frame_id=map_frame_id;
  grid.header.stamp=ros::Time::now();
  ROS_INFO("Read a %d X %d map @ %3.2lf m/cell",grid.info.width,
           grid.info.height,grid.info.resolution);
  ros::Publisher map_pub;
  ros::Publisher bmap_pub;
  ros::Publisher map_two_value_pub;

  // Latched publisher for data
  map_pub = n.advertise<nav_msgs::OccupancyGrid>("map", 1, true);
  map_pub.publish(grid);

  unsigned long dat_size=grid.info.width*grid.info.height;

  bmap.header=grid.header;
  bmap.info=grid.info;
  bmap.data.resize(dat_size,-1);

  char *m=new char[dat_size];
  zw:: map_process(m,grid);

  for (size_t k = 0; k < dat_size; ++k) {
    bmap.data[k]=m[k];
  }

  delete m;

  bmap_pub = n.advertise<nav_msgs::OccupancyGrid>("bmap", 1, true);
  bmap_pub.publish(bmap);

  //for two_value_map  by hulu  将二维数组数据转换为地图消息发送
  for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
		    if(ptr[i][j]==1)	
          ptr[i][j]=zw::kFreeGrid;
        else
				  ptr[i][j]=zw::kOccGrid;
			//printf("%d ", ptr[i][j]);
		}
		//printf("\n");
	}

  map_two_value.header=grid.header;
  map_two_value.info=grid.info;
  map_two_value.data.resize(dat_size,-1); 

  // nav_msgs::OccupancyGrid中地图数据存储在rviz中显示第0行在rviz中最下面，故在此需要将ptr的数据复制给date需要行逆序赋值
  for (int i = grid.info.height-1; i >0; i--)
    for (int j = 0; j < grid.info.width; j++)
    {
     map_two_value.data[j + (grid.info.height-1-i) * grid.info.width] = ptr[i][j]; //origin down-left
    }

  map_two_value_pub = n.advertise<nav_msgs::OccupancyGrid>("maptwovalue", 1, true);
  map_two_value_pub.publish(map_two_value);
  
  for(int i=0;i<row;i++)
    free(ptr[i]);
  free(ptr); 
  ros::spin();
  ros::shutdown();

  return 0;
}
