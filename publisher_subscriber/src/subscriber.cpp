#include "ros/ros.h"
#include "std_msgs/String.h"
#include "robotino_msgs/DigitalReadings.h"

void digitalCallback(const std_msgs::String::ConstPtr& msg)
{

}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");

    ros::NodeHandle n;

    ros::Subscriber sub = n.subscribe("digital_readings", 1, digitalCallback);

    ros::Rate loop_rate(10);

    while (ros::ok())
    {
        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}
