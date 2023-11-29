// Generated by gencpp from file urdf_tutorial/changecontrolledjointsRequest.msg
// DO NOT EDIT!


#ifndef URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTSREQUEST_H
#define URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace urdf_tutorial
{
template <class ContainerAllocator>
struct changecontrolledjointsRequest_
{
  typedef changecontrolledjointsRequest_<ContainerAllocator> Type;

  changecontrolledjointsRequest_()
    : c1(0)
    , c2(0)  {
    }
  changecontrolledjointsRequest_(const ContainerAllocator& _alloc)
    : c1(0)
    , c2(0)  {
  (void)_alloc;
    }



   typedef int32_t _c1_type;
  _c1_type c1;

   typedef int32_t _c2_type;
  _c2_type c2;





  typedef boost::shared_ptr< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct changecontrolledjointsRequest_

typedef ::urdf_tutorial::changecontrolledjointsRequest_<std::allocator<void> > changecontrolledjointsRequest;

typedef boost::shared_ptr< ::urdf_tutorial::changecontrolledjointsRequest > changecontrolledjointsRequestPtr;
typedef boost::shared_ptr< ::urdf_tutorial::changecontrolledjointsRequest const> changecontrolledjointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator1> & lhs, const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.c1 == rhs.c1 &&
    lhs.c2 == rhs.c2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator1> & lhs, const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace urdf_tutorial

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "283ee42b1d51b895e07842f960389784";
  }

  static const char* value(const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x283ee42b1d51b895ULL;
  static const uint64_t static_value2 = 0xe07842f960389784ULL;
};

template<class ContainerAllocator>
struct DataType< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "urdf_tutorial/changecontrolledjointsRequest";
  }

  static const char* value(const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 c1\n"
"int32 c2\n"
;
  }

  static const char* value(const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.c1);
      stream.next(m.c2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct changecontrolledjointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::urdf_tutorial::changecontrolledjointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "c1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.c1);
    s << indent << "c2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.c2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // URDF_TUTORIAL_MESSAGE_CHANGECONTROLLEDJOINTSREQUEST_H