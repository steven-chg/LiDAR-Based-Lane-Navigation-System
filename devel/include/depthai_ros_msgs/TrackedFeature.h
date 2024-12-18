// Generated by gencpp from file depthai_ros_msgs/TrackedFeature.msg
// DO NOT EDIT!


#ifndef DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURE_H
#define DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace depthai_ros_msgs
{
template <class ContainerAllocator>
struct TrackedFeature_
{
  typedef TrackedFeature_<ContainerAllocator> Type;

  TrackedFeature_()
    : header()
    , position()
    , id(0)
    , age(0)
    , harris_score(0.0)
    , tracking_error(0.0)  {
    }
  TrackedFeature_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position(_alloc)
    , id(0)
    , age(0)
    , harris_score(0.0)
    , tracking_error(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint32_t _age_type;
  _age_type age;

   typedef float _harris_score_type;
  _harris_score_type harris_score;

   typedef float _tracking_error_type;
  _tracking_error_type tracking_error;





  typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedFeature_

typedef ::depthai_ros_msgs::TrackedFeature_<std::allocator<void> > TrackedFeature;

typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeature > TrackedFeaturePtr;
typedef boost::shared_ptr< ::depthai_ros_msgs::TrackedFeature const> TrackedFeatureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.position == rhs.position &&
    lhs.id == rhs.id &&
    lhs.age == rhs.age &&
    lhs.harris_score == rhs.harris_score &&
    lhs.tracking_error == rhs.tracking_error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace depthai_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7b24a14f9b5d900250ec5c3f7bf1ec5e";
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7b24a14f9b5d9002ULL;
  static const uint64_t static_value2 = 0x50ec5c3f7bf1ec5eULL;
};

template<class ContainerAllocator>
struct DataType< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "depthai_ros_msgs/TrackedFeature";
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"\n"
"geometry_msgs/Point position\n"
"uint32 id\n"
"\n"
"uint32 age\n"
"\n"
"float32 harris_score\n"
"\n"
"float32 tracking_error\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.id);
      stream.next(m.age);
      stream.next(m.harris_score);
      stream.next(m.tracking_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedFeature_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::depthai_ros_msgs::TrackedFeature_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "age: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.age);
    s << indent << "harris_score: ";
    Printer<float>::stream(s, indent + "  ", v.harris_score);
    s << indent << "tracking_error: ";
    Printer<float>::stream(s, indent + "  ", v.tracking_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEPTHAI_ROS_MSGS_MESSAGE_TRACKEDFEATURE_H
