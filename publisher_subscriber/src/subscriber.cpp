#include "ros/ros.h"
#include "std_msgs/String.h"
#include "robotino_msgs/DigitalReadings.h"

void digitalCallback(const robotino_msgs::DigitalReadings::ConstPtr& msg)
{

}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "digital_subscriber");

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
