
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_zip_CRC32__
#define __java_util_zip_CRC32__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::util::zip::CRC32 : public ::java::lang::Object
{

public:
  CRC32();
private:
  static JArray< jint > * make_crc_table();
public:
  virtual jlong getValue();
  virtual void reset();
  virtual void update(jint);
  virtual void update(JArray< jbyte > *, jint, jint);
  virtual void update(JArray< jbyte > *);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) crc;
  static JArray< jint > * crc_table;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_zip_CRC32__
