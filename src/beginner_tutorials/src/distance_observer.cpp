
    #include <ros/ros.h>
    #include <turtlesim/Pose.h>
    #include <iomanip>
    #include <beginner_tutorials/dis.h>
    

    
    float x_1;
    float y_1;
    float x_2;
    float y_2;
    
    
    void turtlePose1(const turtlesim::Pose& msg) {

        x_1 = msg.x;
        y_1 = msg.y;
    }
    
    void turtlePose2(const turtlesim::Pose& msg) {

        x_2 = msg.x;
        y_2 = msg.y;
    }
    
    
    int main(int argc, char **argv) {
 
    ros::init(argc, argv, "distance observer");
    ros::NodeHandle nh;

    ros::Subscriber sub1 = nh.subscribe("turtle1/pose", 1000,
        &turtlePose1);
    ros::Subscriber sub2 = nh.subscribe("turtle2/pose", 1000,
        &turtlePose2);
    
    
    ros::ServiceClient client = nh.serviceClient<beginner_tutorials::dis>("calculate_distance");
    
    
    beginner_tutorials::dis srv;
    
    
    ros::Rate rate(0.2);
    
    while (ros::ok()) {
    
        ros::spinOnce();
    
        srv.request.x1 = x_1;
        srv.request.y1 = y_1;
        srv.request.x2 = x_2;
        srv.request.y2 = y_2;
    
        if (client.call(srv))
        {
        ROS_INFO("distance: %f", srv.response.dis);
        }
        else
        {
        ROS_ERROR("Failed to call service distance");
        return 1;
        } 
        ROS_INFO_STREAM( "valores=(" <<  x_1 << "," << y_1 << x_2 << y_2 << ")");
    
        rate.sleep();
    }
    
    return 0;
    }
    