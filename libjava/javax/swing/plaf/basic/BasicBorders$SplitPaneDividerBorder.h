
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder__
#define __javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Graphics;
        class Insets;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class JSplitPane;
      namespace plaf
      {
        namespace basic
        {
            class BasicBorders$SplitPaneDividerBorder;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicBorders$SplitPaneDividerBorder : public ::java::lang::Object
{

public:
  BasicBorders$SplitPaneDividerBorder();
  virtual void paintBorder(::java::awt::Component *, ::java::awt::Graphics *, jint, jint, jint, jint);
  virtual ::java::awt::Insets * getBorderInsets(::java::awt::Component *);
  virtual jboolean isBorderOpaque();
private:
  ::javax::swing::JSplitPane * getSplitPane(::java::awt::Component *);
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicBorders$SplitPaneDividerBorder__