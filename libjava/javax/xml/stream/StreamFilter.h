
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_stream_StreamFilter__
#define __javax_xml_stream_StreamFilter__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace stream
      {
          class StreamFilter;
          class XMLStreamReader;
      }
    }
  }
}

class javax::xml::stream::StreamFilter : public ::java::lang::Object
{

public:
  virtual jboolean accept(::javax::xml::stream::XMLStreamReader *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_stream_StreamFilter__