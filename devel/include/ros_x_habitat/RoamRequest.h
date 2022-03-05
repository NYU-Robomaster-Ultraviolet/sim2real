// Generated by gencpp from file ros_x_habitat/RoamRequest.msg
// DO NOT EDIT!


#ifndef ROS_X_HABITAT_MESSAGE_ROAMREQUEST_H
#define ROS_X_HABITAT_MESSAGE_ROAMREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_x_habitat
{
template <class ContainerAllocator>
struct RoamRequest_
{
  typedef RoamRequest_<ContainerAllocator> Type;

  RoamRequest_()
    : episode_id_last()
    , scene_id_last()
    , make_video(false)
    , video_frame_period(0)  {
    }
  RoamRequest_(const ContainerAllocator& _alloc)
    : episode_id_last(_alloc)
    , scene_id_last(_alloc)
    , make_video(false)
    , video_frame_period(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _episode_id_last_type;
  _episode_id_last_type episode_id_last;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _scene_id_last_type;
  _scene_id_last_type scene_id_last;

   typedef uint8_t _make_video_type;
  _make_video_type make_video;

   typedef int32_t _video_frame_period_type;
  _video_frame_period_type video_frame_period;





  typedef boost::shared_ptr< ::ros_x_habitat::RoamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_x_habitat::RoamRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RoamRequest_

typedef ::ros_x_habitat::RoamRequest_<std::allocator<void> > RoamRequest;

typedef boost::shared_ptr< ::ros_x_habitat::RoamRequest > RoamRequestPtr;
typedef boost::shared_ptr< ::ros_x_habitat::RoamRequest const> RoamRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_x_habitat::RoamRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_x_habitat::RoamRequest_<ContainerAllocator1> & lhs, const ::ros_x_habitat::RoamRequest_<ContainerAllocator2> & rhs)
{
  return lhs.episode_id_last == rhs.episode_id_last &&
    lhs.scene_id_last == rhs.scene_id_last &&
    lhs.make_video == rhs.make_video &&
    lhs.video_frame_period == rhs.video_frame_period;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_x_habitat::RoamRequest_<ContainerAllocator1> & lhs, const ::ros_x_habitat::RoamRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_x_habitat

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_x_habitat::RoamRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_x_habitat::RoamRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_x_habitat::RoamRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f3c5236285c0e72cc3a66cf98d0485af";
  }

  static const char* value(const ::ros_x_habitat::RoamRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf3c5236285c0e72cULL;
  static const uint64_t static_value2 = 0xc3a66cf98d0485afULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_x_habitat/RoamRequest";
  }

  static const char* value(const ::ros_x_habitat::RoamRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string episode_id_last\n"
"string scene_id_last\n"
"bool make_video\n"
"int32 video_frame_period\n"
;
  }

  static const char* value(const ::ros_x_habitat::RoamRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.episode_id_last);
      stream.next(m.scene_id_last);
      stream.next(m.make_video);
      stream.next(m.video_frame_period);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RoamRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_x_habitat::RoamRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_x_habitat::RoamRequest_<ContainerAllocator>& v)
  {
    s << indent << "episode_id_last: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.episode_id_last);
    s << indent << "scene_id_last: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.scene_id_last);
    s << indent << "make_video: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.make_video);
    s << indent << "video_frame_period: ";
    Printer<int32_t>::stream(s, indent + "  ", v.video_frame_period);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_X_HABITAT_MESSAGE_ROAMREQUEST_H