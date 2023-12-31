// Generated by gencpp from file message_tests/Changerate.msg
// DO NOT EDIT!


#ifndef MESSAGE_TESTS_MESSAGE_CHANGERATE_H
#define MESSAGE_TESTS_MESSAGE_CHANGERATE_H

#include <ros/service_traits.h>


#include <message_tests/ChangerateRequest.h>
#include <message_tests/ChangerateResponse.h>


namespace message_tests
{

struct Changerate
{

typedef ChangerateRequest Request;
typedef ChangerateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Changerate
} // namespace message_tests


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::message_tests::Changerate > {
  static const char* value()
  {
    return "4c8b4fd3f5e2b2736a3c66de5e015351";
  }

  static const char* value(const ::message_tests::Changerate&) { return value(); }
};

template<>
struct DataType< ::message_tests::Changerate > {
  static const char* value()
  {
    return "message_tests/Changerate";
  }

  static const char* value(const ::message_tests::Changerate&) { return value(); }
};


// service_traits::MD5Sum< ::message_tests::ChangerateRequest> should match
// service_traits::MD5Sum< ::message_tests::Changerate >
template<>
struct MD5Sum< ::message_tests::ChangerateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::message_tests::Changerate >::value();
  }
  static const char* value(const ::message_tests::ChangerateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::message_tests::ChangerateRequest> should match
// service_traits::DataType< ::message_tests::Changerate >
template<>
struct DataType< ::message_tests::ChangerateRequest>
{
  static const char* value()
  {
    return DataType< ::message_tests::Changerate >::value();
  }
  static const char* value(const ::message_tests::ChangerateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::message_tests::ChangerateResponse> should match
// service_traits::MD5Sum< ::message_tests::Changerate >
template<>
struct MD5Sum< ::message_tests::ChangerateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::message_tests::Changerate >::value();
  }
  static const char* value(const ::message_tests::ChangerateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::message_tests::ChangerateResponse> should match
// service_traits::DataType< ::message_tests::Changerate >
template<>
struct DataType< ::message_tests::ChangerateResponse>
{
  static const char* value()
  {
    return DataType< ::message_tests::Changerate >::value();
  }
  static const char* value(const ::message_tests::ChangerateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MESSAGE_TESTS_MESSAGE_CHANGERATE_H
