/* PrinterMoreInfo.java --
   Copyright (C) 2004, 2005 Free Software Foundation, Inc.

This file is part of GNU Classpath.

GNU Classpath is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2, or (at your option)
any later version.

GNU Classpath is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Classpath; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package javax.print.attribute.standard;

import java.net.URI;

import javax.print.attribute.Attribute;
import javax.print.attribute.PrintServiceAttribute;
import javax.print.attribute.URISyntax;

/**
 * The <code>PrinterMoreInfo</code> attribute provides a URI that can be used
 * to obtain more information about the printer.
 * <p>
 * The URI may for example contain a reference to a HTML page with information.
 * The information is normally intended for end users.
 * </p>
 * <p>
 * <b>IPP Compatibility:</b> PrinterMoreInfo is an IPP 1.1 attribute.
 * </p>
 *
 * @author Michael Koch (konqueror@gmx.de)
 * @author Wolfgang Baer (WBaer@gmx.de)
 */
public final class PrinterMoreInfo extends URISyntax
  implements PrintServiceAttribute
{
  private static final long serialVersionUID = 4555850007675338574L;

  /**
   * Constructs a <code>PrinterMoreInfo</code> object.
   *
   * @param uri the URI of the information.
   * @throws NullPointerException if the given uri is null.
   */
  public PrinterMoreInfo(URI uri)
  {
    super(uri);
  }

  /**
   * Tests if the given object is equal to this object.
   *
   * @param obj the object to test
   *
   * @return <code>true</code> if both objects are equal,
   * <code>false</code> otherwise.
   */
  public boolean equals(Object obj)
  {
    if(! (obj instanceof PrinterMoreInfo))
      return false;

    return super.equals(obj);
  }

  /**
   * Returns category of this class.
   *
   * @return The class <code>PrinterMoreInfo</code> itself.
   */
  public Class< ? extends Attribute> getCategory()
  {
    return PrinterMoreInfo.class;
  }

  /**
   * Returns the name of this attribute.
   *
   * @return The name "printer-more-info".
   */
  public String getName()
  {
    return "printer-more-info";
  }
}
