// Generated by gencpp from file iamech_ros/PLCStatus.msg
// DO NOT EDIT!


#ifndef IAMECH_ROS_MESSAGE_PLCSTATUS_H
#define IAMECH_ROS_MESSAGE_PLCSTATUS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <iamech_ros/Wheel.h>
#include <iamech_ros/Wheel.h>

namespace iamech_ros
{
template <class ContainerAllocator>
struct PLCStatus_
{
  typedef PLCStatus_<ContainerAllocator> Type;

  PLCStatus_()
    : header()
    , ServeON(0)
    , right()
    , left()  {
    }
  PLCStatus_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ServeON(0)
    , right(_alloc)
    , left(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _ServeON_type;
  _ServeON_type ServeON;

   typedef  ::iamech_ros::Wheel_<ContainerAllocator>  _right_type;
  _right_type right;

   typedef  ::iamech_ros::Wheel_<ContainerAllocator>  _left_type;
  _left_type left;





  typedef boost::shared_ptr< ::iamech_ros::PLCStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iamech_ros::PLCStatus_<ContainerAllocator> const> ConstPtr;

}; // struct PLCStatus_

typedef ::iamech_ros::PLCStatus_<std::allocator<void> > PLCStatus;

typedef boost::shared_ptr< ::iamech_ros::PLCStatus > PLCStatusPtr;
typedef boost::shared_ptr< ::iamech_ros::PLCStatus const> PLCStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iamech_ros::PLCStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iamech_ros::PLCStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iamech_ros::PLCStatus_<ContainerAllocator1> & lhs, const ::iamech_ros::PLCStatus_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.ServeON == rhs.ServeON &&
    lhs.right == rhs.right &&
    lhs.left == rhs.left;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iamech_ros::PLCStatus_<ContainerAllocator1> & lhs, const ::iamech_ros::PLCStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iamech_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iamech_ros::PLCStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iamech_ros::PLCStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iamech_ros::PLCStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iamech_ros::PLCStatus_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iamech_ros::PLCStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iamech_ros::PLCStatus_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iamech_ros::PLCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ef7303dd3b56e2cbae2954451853687";
  }

  static const char* value(const ::iamech_ros::PLCStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ef7303dd3b56e2cULL;
  static const uint64_t static_value2 = 0xbae2954451853687ULL;
};

template<class ContainerAllocator>
struct DataType< ::iamech_ros::PLCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iamech_ros/PLCStatus";
  }

  static const char* value(const ::iamech_ros::PLCStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iamech_ros::PLCStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"int32 ServeON\n"
"Wheel right\n"
"Wheel left\n"
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
"MSG: iamech_ros/Wheel\n"
"int32 bReady\n"
"int32 bMoving\n"
"int32 bError\n"
"int32 pos\n"
"int32 velocity\n"
"int32 ErrorCode\n"
"int32 temperature\n"
"int32 volt\n"
;
  }

  static const char* value(const ::iamech_ros::PLCStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iamech_ros::PLCStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ServeON);
      stream.next(m.right);
      stream.next(m.left);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PLCStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iamech_ros::PLCStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iamech_ros::PLCStatus_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ServeON: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ServeON);
    s << indent << "right: ";
    s << std::endl;
    Printer< ::iamech_ros::Wheel_<ContainerAllocator> >::stream(s, indent + "  ", v.right);
    s << indent << "left: ";
    s << std::endl;
    Printer< ::iamech_ros::Wheel_<ContainerAllocator> >::stream(s, indent + "  ", v.left);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAMECH_ROS_MESSAGE_PLCSTATUS_H
