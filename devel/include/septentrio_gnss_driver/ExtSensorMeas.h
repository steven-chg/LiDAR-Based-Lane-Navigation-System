// Generated by gencpp from file septentrio_gnss_driver/ExtSensorMeas.msg
// DO NOT EDIT!


#ifndef SEPTENTRIO_GNSS_DRIVER_MESSAGE_EXTSENSORMEAS_H
#define SEPTENTRIO_GNSS_DRIVER_MESSAGE_EXTSENSORMEAS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <septentrio_gnss_driver/BlockHeader.h>

namespace septentrio_gnss_driver
{
template <class ContainerAllocator>
struct ExtSensorMeas_
{
  typedef ExtSensorMeas_<ContainerAllocator> Type;

  ExtSensorMeas_()
    : header()
    , block_header()
    , n(0)
    , sb_length(0)
    , source()
    , sensor_model()
    , type()
    , obs_info()
    , acceleration_x(0.0)
    , acceleration_y(0.0)
    , acceleration_z(0.0)
    , angular_rate_x(0.0)
    , angular_rate_y(0.0)
    , angular_rate_z(0.0)
    , velocity_x(0.0)
    , velocity_y(0.0)
    , velocity_z(0.0)
    , std_dev_x(0.0)
    , std_dev_y(0.0)
    , std_dev_z(0.0)
    , sensor_temperature(0.0)
    , zero_velocity_flag(0.0)  {
    }
  ExtSensorMeas_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , block_header(_alloc)
    , n(0)
    , sb_length(0)
    , source(_alloc)
    , sensor_model(_alloc)
    , type(_alloc)
    , obs_info(_alloc)
    , acceleration_x(0.0)
    , acceleration_y(0.0)
    , acceleration_z(0.0)
    , angular_rate_x(0.0)
    , angular_rate_y(0.0)
    , angular_rate_z(0.0)
    , velocity_x(0.0)
    , velocity_y(0.0)
    , velocity_z(0.0)
    , std_dev_x(0.0)
    , std_dev_y(0.0)
    , std_dev_z(0.0)
    , sensor_temperature(0.0)
    , zero_velocity_flag(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator>  _block_header_type;
  _block_header_type block_header;

   typedef uint8_t _n_type;
  _n_type n;

   typedef uint8_t _sb_length_type;
  _sb_length_type sb_length;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _source_type;
  _source_type source;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _sensor_model_type;
  _sensor_model_type sensor_model;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _type_type;
  _type_type type;

   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _obs_info_type;
  _obs_info_type obs_info;

   typedef double _acceleration_x_type;
  _acceleration_x_type acceleration_x;

   typedef double _acceleration_y_type;
  _acceleration_y_type acceleration_y;

   typedef double _acceleration_z_type;
  _acceleration_z_type acceleration_z;

   typedef double _angular_rate_x_type;
  _angular_rate_x_type angular_rate_x;

   typedef double _angular_rate_y_type;
  _angular_rate_y_type angular_rate_y;

   typedef double _angular_rate_z_type;
  _angular_rate_z_type angular_rate_z;

   typedef float _velocity_x_type;
  _velocity_x_type velocity_x;

   typedef float _velocity_y_type;
  _velocity_y_type velocity_y;

   typedef float _velocity_z_type;
  _velocity_z_type velocity_z;

   typedef float _std_dev_x_type;
  _std_dev_x_type std_dev_x;

   typedef float _std_dev_y_type;
  _std_dev_y_type std_dev_y;

   typedef float _std_dev_z_type;
  _std_dev_z_type std_dev_z;

   typedef float _sensor_temperature_type;
  _sensor_temperature_type sensor_temperature;

   typedef double _zero_velocity_flag_type;
  _zero_velocity_flag_type zero_velocity_flag;





  typedef boost::shared_ptr< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> const> ConstPtr;

}; // struct ExtSensorMeas_

typedef ::septentrio_gnss_driver::ExtSensorMeas_<std::allocator<void> > ExtSensorMeas;

typedef boost::shared_ptr< ::septentrio_gnss_driver::ExtSensorMeas > ExtSensorMeasPtr;
typedef boost::shared_ptr< ::septentrio_gnss_driver::ExtSensorMeas const> ExtSensorMeasConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.block_header == rhs.block_header &&
    lhs.n == rhs.n &&
    lhs.sb_length == rhs.sb_length &&
    lhs.source == rhs.source &&
    lhs.sensor_model == rhs.sensor_model &&
    lhs.type == rhs.type &&
    lhs.obs_info == rhs.obs_info &&
    lhs.acceleration_x == rhs.acceleration_x &&
    lhs.acceleration_y == rhs.acceleration_y &&
    lhs.acceleration_z == rhs.acceleration_z &&
    lhs.angular_rate_x == rhs.angular_rate_x &&
    lhs.angular_rate_y == rhs.angular_rate_y &&
    lhs.angular_rate_z == rhs.angular_rate_z &&
    lhs.velocity_x == rhs.velocity_x &&
    lhs.velocity_y == rhs.velocity_y &&
    lhs.velocity_z == rhs.velocity_z &&
    lhs.std_dev_x == rhs.std_dev_x &&
    lhs.std_dev_y == rhs.std_dev_y &&
    lhs.std_dev_z == rhs.std_dev_z &&
    lhs.sensor_temperature == rhs.sensor_temperature &&
    lhs.zero_velocity_flag == rhs.zero_velocity_flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator1> & lhs, const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace septentrio_gnss_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc4155d6dac83ebf51ac1aba432000ae";
  }

  static const char* value(const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc4155d6dac83ebfULL;
  static const uint64_t static_value2 = 0x51ac1aba432000aeULL;
};

template<class ContainerAllocator>
struct DataType< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
{
  static const char* value()
  {
    return "septentrio_gnss_driver/ExtSensorMeas";
  }

  static const char* value(const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ExtSensorMeas block \n"
"# Block_Number 4050\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# SBF block header including time header\n"
"BlockHeader block_header\n"
"\n"
"uint8   n\n"
"uint8   sb_length\n"
"\n"
"# ExtSensorMeasSet\n"
"uint8[]   source\n"
"uint8[]   sensor_model\n"
"uint8[]   type\n"
"uint8[]   obs_info\n"
"\n"
"#ExtSensorMeasAcceleration\n"
"float64 acceleration_x # m/s^2\n"
"float64 acceleration_y # m/s^2\n"
"float64 acceleration_z # m/s^2\n"
"\n"
"#ExtSensorMeasAngularRate\n"
"float64 angular_rate_x # deg/s\n"
"float64 angular_rate_y # deg/s\n"
"float64 angular_rate_z # deg/s\n"
"\n"
"#ExtSensorMeasVelocity\n"
"float32 velocity_x # m/s\n"
"float32 velocity_y # m/s\n"
"float32 velocity_z # m/s\n"
"float32 std_dev_x # m/s\n"
"float32 std_dev_y # m/s\n"
"float32 std_dev_z # m/s\n"
"\n"
"#ExtSensorMeasInfo\n"
"float32 sensor_temperature # deg C\n"
"\n"
"#ExtSensorMeasZeroVelocityFlag\n"
"float64 zero_velocity_flag\n"
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
"MSG: septentrio_gnss_driver/BlockHeader\n"
"# Blockheader including time header for all ROS messages that publish SBF blocks\n"
"\n"
"uint8     sync_1\n"
"uint8     sync_2\n"
"uint16    crc\n"
"uint16    id\n"
"uint8     revision\n"
"uint16    length\n"
"\n"
"uint32    tow # ms since week start\n"
"uint16    wnc # weeks since Jan 06, 1980 at 00:00:00 UTC     \n"
;
  }

  static const char* value(const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.block_header);
      stream.next(m.n);
      stream.next(m.sb_length);
      stream.next(m.source);
      stream.next(m.sensor_model);
      stream.next(m.type);
      stream.next(m.obs_info);
      stream.next(m.acceleration_x);
      stream.next(m.acceleration_y);
      stream.next(m.acceleration_z);
      stream.next(m.angular_rate_x);
      stream.next(m.angular_rate_y);
      stream.next(m.angular_rate_z);
      stream.next(m.velocity_x);
      stream.next(m.velocity_y);
      stream.next(m.velocity_z);
      stream.next(m.std_dev_x);
      stream.next(m.std_dev_y);
      stream.next(m.std_dev_z);
      stream.next(m.sensor_temperature);
      stream.next(m.zero_velocity_flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExtSensorMeas_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::septentrio_gnss_driver::ExtSensorMeas_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "block_header: ";
    s << std::endl;
    Printer< ::septentrio_gnss_driver::BlockHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.block_header);
    s << indent << "n: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n);
    s << indent << "sb_length: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sb_length);
    s << indent << "source[]" << std::endl;
    for (size_t i = 0; i < v.source.size(); ++i)
    {
      s << indent << "  source[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.source[i]);
    }
    s << indent << "sensor_model[]" << std::endl;
    for (size_t i = 0; i < v.sensor_model.size(); ++i)
    {
      s << indent << "  sensor_model[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.sensor_model[i]);
    }
    s << indent << "type[]" << std::endl;
    for (size_t i = 0; i < v.type.size(); ++i)
    {
      s << indent << "  type[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.type[i]);
    }
    s << indent << "obs_info[]" << std::endl;
    for (size_t i = 0; i < v.obs_info.size(); ++i)
    {
      s << indent << "  obs_info[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.obs_info[i]);
    }
    s << indent << "acceleration_x: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration_x);
    s << indent << "acceleration_y: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration_y);
    s << indent << "acceleration_z: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration_z);
    s << indent << "angular_rate_x: ";
    Printer<double>::stream(s, indent + "  ", v.angular_rate_x);
    s << indent << "angular_rate_y: ";
    Printer<double>::stream(s, indent + "  ", v.angular_rate_y);
    s << indent << "angular_rate_z: ";
    Printer<double>::stream(s, indent + "  ", v.angular_rate_z);
    s << indent << "velocity_x: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_x);
    s << indent << "velocity_y: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_y);
    s << indent << "velocity_z: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_z);
    s << indent << "std_dev_x: ";
    Printer<float>::stream(s, indent + "  ", v.std_dev_x);
    s << indent << "std_dev_y: ";
    Printer<float>::stream(s, indent + "  ", v.std_dev_y);
    s << indent << "std_dev_z: ";
    Printer<float>::stream(s, indent + "  ", v.std_dev_z);
    s << indent << "sensor_temperature: ";
    Printer<float>::stream(s, indent + "  ", v.sensor_temperature);
    s << indent << "zero_velocity_flag: ";
    Printer<double>::stream(s, indent + "  ", v.zero_velocity_flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SEPTENTRIO_GNSS_DRIVER_MESSAGE_EXTSENSORMEAS_H
