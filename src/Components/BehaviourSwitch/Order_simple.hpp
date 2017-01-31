// Generated by gencpp from file door_detector/Order_simple.msg
// DO NOT EDIT!


#ifndef DOOR_DETECTOR_MESSAGE_ORDER_SIMPLE_H
#define DOOR_DETECTOR_MESSAGE_ORDER_SIMPLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace door_detector
{
template <class ContainerAllocator>
struct Order_simple_
{
  typedef Order_simple_<ContainerAllocator> Type;

  Order_simple_()
    : behaviour()
    , img_path()
    , models_path()  {
    }
  Order_simple_(const ContainerAllocator& _alloc)
    : behaviour(_alloc)
    , img_path(_alloc)
    , models_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _behaviour_type;
  _behaviour_type behaviour;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _img_path_type;
  _img_path_type img_path;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _models_path_type;
  _models_path_type models_path;




  typedef boost::shared_ptr< ::door_detector::Order_simple_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::door_detector::Order_simple_<ContainerAllocator> const> ConstPtr;

}; // struct Order_simple_

typedef ::door_detector::Order_simple_<std::allocator<void> > Order_simple;

typedef boost::shared_ptr< ::door_detector::Order_simple > Order_simplePtr;
typedef boost::shared_ptr< ::door_detector::Order_simple const> Order_simpleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::door_detector::Order_simple_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::door_detector::Order_simple_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace door_detector

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'door_detector': ['/home/anna/ros_ws/src/door_detector/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::door_detector::Order_simple_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::door_detector::Order_simple_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::door_detector::Order_simple_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::door_detector::Order_simple_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::door_detector::Order_simple_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::door_detector::Order_simple_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::door_detector::Order_simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "504a734ac937d0c30b4285eff1d5a7e6";
  }

  static const char* value(const ::door_detector::Order_simple_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x504a734ac937d0c3ULL;
  static const uint64_t static_value2 = 0x0b4285eff1d5a7e6ULL;
};

template<class ContainerAllocator>
struct DataType< ::door_detector::Order_simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "door_detector/Order_simple";
  }

  static const char* value(const ::door_detector::Order_simple_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::door_detector::Order_simple_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string behaviour\n\
string img_path\n\
string models_path\n\
";
  }

  static const char* value(const ::door_detector::Order_simple_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::door_detector::Order_simple_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.behaviour);
      stream.next(m.img_path);
      stream.next(m.models_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Order_simple_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::door_detector::Order_simple_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::door_detector::Order_simple_<ContainerAllocator>& v)
  {
    s << indent << "behaviour: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.behaviour);
    s << indent << "img_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.img_path);
    s << indent << "models_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.models_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOOR_DETECTOR_MESSAGE_ORDER_SIMPLE_H