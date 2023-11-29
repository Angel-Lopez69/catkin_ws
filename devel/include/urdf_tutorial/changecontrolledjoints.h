// Generated by gencpp from file urdf_tutorial/changecontrolledjoints.msg
// DO NOT EDIT!


#ifndef URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTS_H
#define URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTS_H

#include <ros/service_traits.h>


#include <urdf_tutorial/changecontrolledjointsRequest.h>
#include <urdf_tutorial/changecontrolledjointsResponse.h>


namespace urdf_tutorial
{

struct changecontrolledjoints
{

typedef changecontrolledjointsRequest Request;
typedef changecontrolledjointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct changecontrolledjoints
} // namespace urdf_tutorial


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::urdf_tutorial::changecontrolledjoints > {
  static const char* value()
  {
    return "283ee42b1d51b895e07842f960389784";
  }

  static const char* value(const ::urdf_tutorial::changecontrolledjoints&) { return value(); }
};

template<>
struct DataType< ::urdf_tutorial::changecontrolledjoints > {
  static const char* value()
  {
    return "urdf_tutorial/changecontrolledjoints";
  }

  static const char* value(const ::urdf_tutorial::changecontrolledjoints&) { return value(); }
};


// service_traits::MD5Sum< ::urdf_tutorial::changecontrolledjointsRequest> should match
// service_traits::MD5Sum< ::urdf_tutorial::changecontrolledjoints >
template<>
struct MD5Sum< ::urdf_tutorial::changecontrolledjointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::urdf_tutorial::changecontrolledjoints >::value();
  }
  static const char* value(const ::urdf_tutorial::changecontrolledjointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::urdf_tutorial::changecontrolledjointsRequest> should match
// service_traits::DataType< ::urdf_tutorial::changecontrolledjoints >
template<>
struct DataType< ::urdf_tutorial::changecontrolledjointsRequest>
{
  static const char* value()
  {
    return DataType< ::urdf_tutorial::changecontrolledjoints >::value();
  }
  static const char* value(const ::urdf_tutorial::changecontrolledjointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::urdf_tutorial::changecontrolledjointsResponse> should match
// service_traits::MD5Sum< ::urdf_tutorial::changecontrolledjoints >
template<>
struct MD5Sum< ::urdf_tutorial::changecontrolledjointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::urdf_tutorial::changecontrolledjoints >::value();
  }
  static const char* value(const ::urdf_tutorial::changecontrolledjointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::urdf_tutorial::changecontrolledjointsResponse> should match
// service_traits::DataType< ::urdf_tutorial::changecontrolledjoints >
template<>
struct DataType< ::urdf_tutorial::changecontrolledjointsResponse>
{
  static const char* value()
  {
    return DataType< ::urdf_tutorial::changecontrolledjoints >::value();
  }
  static const char* value(const ::urdf_tutorial::changecontrolledjointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTS_H