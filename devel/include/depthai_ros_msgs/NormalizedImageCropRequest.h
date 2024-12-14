// Generated by gencpp from file depthai_ros_msgs/NormalizedImageCropRequest.msg
// DO NOT EDIT!


#ifndef DEPTHAI_ROS_MSGS_MESSAGE_NORMALIZEDIMAGECROPREQUEST_H
#define DEPTHAI_ROS_MSGS_MESSAGE_NORMALIZEDIMAGECROPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <geometry_msgs/Pose2D.h>

namespace depthai_ros_msgs
{
template <class ContainerAllocator>
struct NormalizedImageCropRequest_
{
  typedef NormalizedImageCropRequest_<ContainerAllocator> Type;

  NormalizedImageCropRequest_()
    : top_left()
    , bottom_right()  {
    }
  NormalizedImageCropRequest_(const ContainerAllocator& _alloc)
    : top_left(_alloc)
    , bottom_right(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _top_left_type;
  _top_left_type top_left;

   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _bottom_right_type;
  _bottom_right_type bottom_right;





  typedef boost::shared_ptr< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> const> ConstPtr;

}; // struct NormalizedImageCropRequest_

typedef ::depthai_ros_msgs::NormalizedImageCropRequest_<std::allocator<void> > NormalizedImageCropRequest;

typedef boost::shared_ptr< ::depthai_ros_msgs::NormalizedImageCropRequest > NormalizedImageCropRequestPtr;
typedef boost::shared_ptr< ::depthai_ros_msgs::NormalizedImageCropRequest const> NormalizedImageCropRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator2> & rhs)
{
  return lhs.top_left == rhs.top_left &&
    lhs.bottom_right == rhs.bottom_right;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator1> & lhs, const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace depthai_ros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "59bb83618d002416c9960e7cc0740912";
  }

  static const char* value(const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x59bb83618d002416ULL;
  static const uint64_t static_value2 = 0xc9960e7cc0740912ULL;
};

template<class ContainerAllocator>
struct DataType< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "depthai_ros_msgs/NormalizedImageCropRequest";
  }

  static const char* value(const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D top_left\n"
"geometry_msgs/Pose2D bottom_right\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.top_left);
      stream.next(m.bottom_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NormalizedImageCropRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::depthai_ros_msgs::NormalizedImageCropRequest_<ContainerAllocator>& v)
  {
    s << indent << "top_left: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.top_left);
    s << indent << "bottom_right: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.bottom_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEPTHAI_ROS_MSGS_MESSAGE_NORMALIZEDIMAGECROPREQUEST_H
