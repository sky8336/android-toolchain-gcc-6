
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicDesktopPaneUI__
#define __javax_swing_plaf_basic_BasicDesktopPaneUI__

#pragma interface

#include <javax/swing/plaf/DesktopPaneUI.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Dimension;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class DesktopManager;
        class JComponent;
        class JDesktopPane;
        class KeyStroke;
      namespace plaf
      {
          class ComponentUI;
        namespace basic
        {
            class BasicDesktopPaneUI;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicDesktopPaneUI : public ::javax::swing::plaf::DesktopPaneUI
{

public:
  BasicDesktopPaneUI();
  static ::javax::swing::plaf::ComponentUI * createUI(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMaximumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getMinimumSize(::javax::swing::JComponent *);
  virtual ::java::awt::Dimension * getPreferredSize(::javax::swing::JComponent *);
public: // actually protected
  virtual void installDefaults();
  virtual void installDesktopManager();
  virtual void installKeyboardActions();
public:
  virtual void installUI(::javax::swing::JComponent *);
public: // actually protected
  virtual void registerKeyboardActions();
  virtual void uninstallDefaults();
  virtual void uninstallDesktopManager();
  virtual void uninstallKeyboardActions();
  virtual void unregisterKeyboardActions();
public:
  virtual void uninstallUI(::javax::swing::JComponent *);
public: // actually protected
  ::javax::swing::KeyStroke * __attribute__((aligned(__alignof__( ::javax::swing::plaf::DesktopPaneUI)))) closeKey;
  ::javax::swing::KeyStroke * maximizeKey;
  ::javax::swing::KeyStroke * minimizeKey;
  ::javax::swing::KeyStroke * navigateKey;
  ::javax::swing::KeyStroke * navigateKey2;
  ::javax::swing::DesktopManager * desktopManager;
  ::javax::swing::JDesktopPane * desktop;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicDesktopPaneUI__