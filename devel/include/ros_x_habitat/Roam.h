// Generated by gencpp from file ros_x_habitat/Roam.msg
// DO NOT EDIT!


#ifndef ROS_X_HABITAT_MESSAGE_ROAM_H
#define ROS_X_HABITAT_MESSAGE_ROAM_H

#include <ros/service_traits.h>


#include <ros_x_habitat/RoamRequest.h>
#include <ros_x_habitat/RoamResponse.h>


namespace ros_x_habitat
{

struct Roam
{

typedef RoamRequest Request;
typedef RoamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Roam
} // namespace ros_x_habitat


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ros_x_habitat::Roam > {
  static const char* value()
  {
    return "1c6692b437c77a3364ed4415992a3409";
  }

  static const char* value(const ::ros_x_habitat::Roam&) { return value(); }
};

template<>
struct DataType< ::ros_x_habitat::Roam > {
  static const char* value()
  {
    return "ros_x_habitat/Roam";
  }

  static const char* value(const ::ros_x_habitat::Roam&) { return value(); }
};


// service_traits::MD5Sum< ::ros_x_habitat::RoamRequest> should match
// service_traits::MD5Sum< ::ros_x_habitat::Roam >
template<>
struct MD5Sum< ::ros_x_habitat::RoamRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ros_x_habitat::Roam >::value();
  }
  static const char* value(const ::ros_x_habitat::RoamRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_x_habitat::RoamRequest> should match
// service_traits::DataType< ::ros_x_habitat::Roam >
template<>
struct DataType< ::ros_x_habitat::RoamRequest>
{
  static const char* value()
  {
    return DataType< ::ros_x_habitat::Roam >::value();
  }
  static const char* value(const ::ros_x_habitat::RoamRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ros_x_habitat::RoamResponse> should match
// service_traits::MD5Sum< ::ros_x_habitat::Roam >
template<>
struct MD5Sum< ::ros_x_habitat::RoamResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ros_x_habitat::Roam >::value();
  }
  static const char* value(const ::ros_x_habitat::RoamResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ros_x_habitat::RoamResponse> should match
// service_traits::DataType< ::ros_x_habitat::Roam >
template<>
struct DataType< ::ros_x_habitat::RoamResponse>
{
  static const char* value()
  {
    return DataType< ::ros_x_habitat::Roam >::value();
  }
  static const char* value(const ::ros_x_habitat::RoamResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROS_X_HABITAT_MESSAGE_ROAM_H