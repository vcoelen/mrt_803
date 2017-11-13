#include "ros/ros.h"
#include "std_msgs/String.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{

    ros::init(argc, argv, "cmd_vel_publisher");

    ros::NodeHandle n;

    ros::Publisher cmdvel_pub = n.advertise<geometry_msgs::Twist>("cmd_vel", 1);

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        geometry_msgs::Twist cmdvel_msg;

        // your code here


        ROS_INFO_STREAM("Velocity command : " << cmdvel_msg)
        cmdvel_pub.publish(cmdvel_msg);

        ros::spinOnce();

        loop_rate.sleep();
    }


    return 0;
}
