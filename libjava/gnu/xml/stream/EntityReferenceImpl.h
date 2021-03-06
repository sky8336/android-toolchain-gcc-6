
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_stream_EntityReferenceImpl__
#define __gnu_xml_stream_EntityReferenceImpl__

#pragma interface

#include <gnu/xml/stream/XMLEventImpl.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace stream
      {
          class EntityReferenceImpl;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace stream
      {
          class Location;
        namespace events
        {
            class EntityDeclaration;
        }
      }
    }
  }
}

class gnu::xml::stream::EntityReferenceImpl : public ::gnu::xml::stream::XMLEventImpl
{

public: // actually protected
  EntityReferenceImpl(::javax::xml::stream::Location *, ::javax::xml::stream::events::EntityDeclaration *, ::java::lang::String *);
public:
  virtual jint getEventType();
  virtual ::javax::xml::stream::events::EntityDeclaration * getDeclaration();
  virtual ::java::lang::String * getName();
  virtual void writeAsEncodedUnicode(::java::io::Writer *);
public: // actually protected
  ::javax::xml::stream::events::EntityDeclaration * __attribute__((aligned(__alignof__( ::gnu::xml::stream::XMLEventImpl)))) decl;
  ::java::lang::String * name;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_stream_EntityReferenceImpl__
