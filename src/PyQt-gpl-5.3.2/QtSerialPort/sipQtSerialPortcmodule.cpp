/*
 * Module code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:49 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtSerialPort.h"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSerialPort/qserialportinfo.sip"
#include <qserialportinfo.h>
#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtSerialPort[] = {
    's', 'e', 't', 't', 'i', 'n', 'g', 's', 'R', 'e', 's', 't', 'o', 'r', 'e', 'd', 'O', 'n', 'C', 'l', 'o', 's', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'S', 'e', 'c', 'o', 'n', 'd', 'a', 'r', 'y', 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'd', 'D', 'a', 't', 'a', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', 'E', 'r', 'r', 'o', 'r', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'D', 'a', 't', 'a', 'E', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'S', 'e', 'c', 'o', 'n', 'd', 'a', 'r', 'y', 'R', 'e', 'c', 'e', 'i', 'v', 'e', 'd', 'D', 'a', 't', 'a', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    's', 'e', 't', 'S', 'e', 't', 't', 'i', 'n', 'g', 's', 'R', 'e', 's', 't', 'o', 'r', 'e', 'd', 'O', 'n', 'C', 'l', 'o', 's', 'e', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'P', 'i', 'n', 'o', 'u', 't', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'P', 'i', 'n', 'o', 'u', 't', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'd', 'a', 't', 'a', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 'R', 'e', 'a', 'd', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'F', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    's', 'e', 't', 't', 'i', 'n', 'g', 's', 'R', 'e', 's', 't', 'o', 'r', 'e', 'd', 'O', 'n', 'C', 'l', 'o', 's', 'e', 0,
    'D', 'a', 't', 'a', 'C', 'a', 'r', 'r', 'i', 'e', 'r', 'D', 'e', 't', 'e', 'c', 't', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'D', 'a', 't', 'a', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 'R', 'e', 'a', 'd', 'y', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 's', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', 'I', 'n', 'f', 'o', '>', 0,
    'd', 'a', 't', 'a', 'E', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'S', 't', 'o', 'p', 'B', 'i', 't', 's', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'D', 'a', 't', 'a', 'B', 'i', 't', 's', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'B', 'a', 'u', 'd', 'R', 'a', 't', 'e', 0,
    'h', 'a', 's', 'P', 'r', 'o', 'd', 'u', 'c', 't', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 0,
    'r', 'e', 'q', 'u', 'e', 's', 't', 'T', 'o', 'S', 'e', 'n', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'D', 'a', 't', 'a', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 'R', 'e', 'a', 'd', 'y', 0,
    'h', 'a', 's', 'V', 'e', 'n', 'd', 'o', 'r', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 0,
    'i', 's', 'D', 'a', 't', 'a', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 'R', 'e', 'a', 'd', 'y', 0,
    'B', 'r', 'e', 'a', 'k', 'C', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'D', 'e', 'v', 'i', 'c', 'e', 'N', 'o', 't', 'F', 'o', 'u', 'n', 'd', 'E', 'r', 'r', 'o', 'r', 0,
    'S', 't', 'o', 'p', 'R', 'e', 'c', 'e', 'i', 'v', 'i', 'n', 'g', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'R', 'e', 'q', 'u', 'e', 's', 't', 'T', 'o', 'S', 'e', 'n', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'R', 'i', 'n', 'g', 'I', 'n', 'd', 'i', 'c', 'a', 't', 'o', 'r', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', ':', ':', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'w', 'a', 'i', 't', 'F', 'o', 'r', 'B', 'y', 't', 'e', 's', 'W', 'r', 'i', 't', 't', 'e', 'n', 0,
    'f', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'D', 'a', 't', 'a', 'E', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'D', 'a', 't', 'a', 'S', 'e', 't', 'R', 'e', 'a', 'd', 'y', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'F', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', 0,
    's', 't', 'a', 'n', 'd', 'a', 'r', 'd', 'B', 'a', 'u', 'd', 'R', 'a', 't', 'e', 's', 0,
    'p', 'r', 'o', 'd', 'u', 'c', 't', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 0,
    's', 'e', 't', 'R', 'e', 'a', 'd', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'C', 'l', 'e', 'a', 'r', 'T', 'o', 'S', 'e', 'n', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'i', 's', 'S', 'i', 'g', 'n', 'a', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    's', 'e', 'n', 'd', 'e', 'r', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'd', 'e', 'x', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'v', 'e', 'n', 'd', 'o', 'r', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'e', 'r', 0,
    's', 'e', 't', 'R', 'e', 'q', 'u', 'e', 's', 't', 'T', 'o', 'S', 'e', 'n', 'd', 0,
    'w', 'a', 'i', 't', 'F', 'o', 'r', 'R', 'e', 'a', 'd', 'y', 'R', 'e', 'a', 'd', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', 'I', 'n', 'f', 'o', 0,
    's', 't', 'o', 'p', 'B', 'i', 't', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'd', 'a', 't', 'a', 'B', 'i', 't', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'b', 'a', 'u', 'd', 'R', 'a', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'B', 'r', 'e', 'a', 'k', 'E', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'd', 'a', 't', 'a', 'E', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'i', 's', 'R', 'e', 'q', 'u', 'e', 's', 't', 'T', 'o', 'S', 'e', 'n', 'd', 0,
    'S', 'o', 'f', 't', 'w', 'a', 'r', 'e', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'H', 'a', 'r', 'd', 'w', 'a', 'r', 'e', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'S', 't', 'o', 'p', 'B', 'i', 't', 's', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'D', 'a', 't', 'a', 'B', 'i', 't', 's', 0,
    'P', 'e', 'r', 'm', 'i', 's', 's', 'i', 'o', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'a', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 'P', 'o', 'r', 't', 's', 0,
    's', 'y', 's', 't', 'e', 'm', 'L', 'o', 'c', 'a', 't', 'i', 'o', 'n', 0,
    'r', 'e', 'a', 'd', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'F', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'P', 'a', 's', 's', 'Z', 'e', 'r', 'o', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'O', 'n', 'e', 'A', 'n', 'd', 'H', 'a', 'l', 'f', 'S', 't', 'o', 'p', 0,
    's', 'e', 't', 'E', 'r', 'r', 'o', 'r', 'S', 't', 'r', 'i', 'n', 'g', 0,
    'b', 'y', 't', 'e', 's', 'A', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 0,
    'p', 'a', 'r', 'i', 't', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'p', 'i', 'n', 'o', 'u', 't', 'S', 'i', 'g', 'n', 'a', 'l', 's', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'N', 'o', 'F', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'A', 'l', 'l', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 's', 0,
    'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'e', 'r', 'i', 'a', 'l', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'm', 'a', 'n', 'u', 'f', 'a', 'c', 't', 'u', 'r', 'e', 'r', 0,
    'N', 'o', 't', 'O', 'p', 'e', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'T', 'i', 'm', 'e', 'o', 'u', 't', 'E', 'r', 'r', 'o', 'r', 0,
    'F', 'r', 'a', 'm', 'i', 'n', 'g', 'E', 'r', 'r', 'o', 'r', 0,
    'I', 'g', 'n', 'o', 'r', 'e', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'b', 'y', 't', 'e', 's', 'T', 'o', 'W', 'r', 'i', 't', 'e', 0,
    'r', 'e', 'a', 'd', 'L', 'i', 'n', 'e', 'D', 'a', 't', 'a', 0,
    'i', 's', 'S', 'e', 'q', 'u', 'e', 'n', 't', 'i', 'a', 'l', 0,
    'f', 'l', 'o', 'w', 'C', 'o', 'n', 't', 'r', 'o', 'l', 0,
    's', 'e', 't', 'S', 't', 'o', 'p', 'B', 'i', 't', 's', 0,
    's', 'e', 't', 'D', 'a', 't', 'a', 'B', 'i', 't', 's', 0,
    's', 'e', 't', 'B', 'a', 'u', 'd', 'R', 'a', 't', 'e', 0,
    's', 'e', 't', 'P', 'o', 'r', 't', 'N', 'a', 'm', 'e', 0,
    'P', 'a', 'r', 'i', 't', 'y', 'E', 'r', 'r', 'o', 'r', 0,
    'S', 'p', 'a', 'c', 'e', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 'B', 'a', 'u', 'd', 0,
    'Q', 'S', 'e', 'r', 'i', 'a', 'l', 'P', 'o', 'r', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    's', 'e', 't', 'O', 'p', 'e', 'n', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 's', 'c', 'r', 'i', 'p', 't', 'i', 'o', 'n', 0,
    'c', 'a', 'n', 'R', 'e', 'a', 'd', 'L', 'i', 'n', 'e', 0,
    'S', 'k', 'i', 'p', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'M', 'a', 'r', 'k', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'E', 'v', 'e', 'n', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'B', 'a', 'u', 'd', '1', '1', '5', '2', '0', '0', 0,
    'c', 'l', 'e', 'a', 'r', 'E', 'r', 'r', 'o', 'r', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'W', 'r', 'i', 't', 'e', 'E', 'r', 'r', 'o', 'r', 0,
    '_', '_', 'i', 'n', 'v', 'e', 'r', 't', '_', '_', 0,
    's', 'e', 'n', 'd', 'B', 'r', 'e', 'a', 'k', 0,
    's', 'e', 't', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'O', 'd', 'd', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'B', 'a', 'u', 'd', '5', '7', '6', '0', '0', 0,
    'B', 'a', 'u', 'd', '3', '8', '4', '0', '0', 0,
    'B', 'a', 'u', 'd', '1', '9', '2', '0', '0', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 'r', 's', 0,
    'R', 'e', 'a', 'd', 'E', 'r', 'r', 'o', 'r', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'w', 'r', 'i', 't', 'e', 'D', 'a', 't', 'a', 0,
    's', 't', 'o', 'p', 'B', 'i', 't', 's', 0,
    'd', 'a', 't', 'a', 'B', 'i', 't', 's', 0,
    'b', 'a', 'u', 'd', 'R', 'a', 't', 'e', 0,
    'p', 'o', 'r', 't', 'N', 'a', 'm', 'e', 0,
    'N', 'o', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    'N', 'o', 'P', 'a', 'r', 'i', 't', 'y', 0,
    'B', 'a', 'u', 'd', '9', '6', '0', '0', 0,
    'B', 'a', 'u', 'd', '4', '8', '0', '0', 0,
    'B', 'a', 'u', 'd', '2', '4', '0', '0', 0,
    'B', 'a', 'u', 'd', '1', '2', '0', '0', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    'r', 'e', 'a', 'd', 'D', 'a', 't', 'a', 0,
    'd', 'u', 'r', 'a', 't', 'i', 'o', 'n', 0,
    '_', '_', 'b', 'o', 'o', 'l', '_', '_', 0,
    '_', '_', 'i', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'a', 'n', 'd', '_', '_', 0,
    'T', 'w', 'o', 'S', 't', 'o', 'p', 0,
    'O', 'n', 'e', 'S', 't', 'o', 'p', 0,
    's', 'e', 't', 'P', 'o', 'r', 't', 0,
    'N', 'o', 'E', 'r', 'r', 'o', 'r', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    '_', '_', 'a', 'n', 'd', '_', '_', 0,
    '_', '_', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'n', 't', '_', '_', 0,
    '_', '_', 'i', 'o', 'r', '_', '_', 0,
    'i', 's', 'B', 'u', 's', 'y', 0,
    'p', 'a', 'r', 'i', 't', 'y', 0,
    'O', 'u', 't', 'p', 'u', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    's', 'e', 'n', 'd', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'h', 'a', 'n', 'd', 'l', 'e', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'i', 's', 'N', 'u', 'l', 'l', 0,
    'o', 'b', 'j', 'e', 'c', 't', 0,
    'p', 'o', 'l', 'i', 'c', 'y', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    '_', '_', 'n', 'e', '_', '_', 0,
    '_', '_', 'e', 'q', '_', '_', 0,
    '_', '_', 'o', 'r', '_', '_', 0,
    'D', 'a', 't', 'a', '8', 0,
    'D', 'a', 't', 'a', '7', 0,
    'D', 'a', 't', 'a', '6', 0,
    'D', 'a', 't', 'a', '5', 0,
    'I', 'n', 'p', 'u', 't', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'r', 'e', 's', 'e', 't', 0,
    'a', 't', 'E', 'n', 'd', 0,
    'c', 'l', 'o', 's', 'e', 0,
    'c', 'l', 'e', 'a', 'r', 0,
    'f', 'l', 'u', 's', 'h', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    's', 'e', 'e', 'k', 0,
    'o', 'p', 'e', 'n', 0,
    's', 'i', 'z', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    's', 'w', 'a', 'p', 0,
    'd', 'i', 'r', 0,
    'p', 'o', 's', 0,
};
#line 25 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 246 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QSerialPort(void **);}
static const sipTypeDef *sipSubClass_QSerialPort(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSerialPort/qserialport.sip"
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_QSerialPort, &sipType_QSerialPort, -1, -1},
    };
    
    int i = 0;
    
    sipType = NULL;
    
    do
    {
        struct class_graph *cg = &graph[i];
    
        if (cg->name != NULL && sipCpp->inherits(cg->name))
        {
            sipType = *cg->type;
            i = cg->yes;
        }
        else
            i = cg->no;
    }
    while (i >= 0);
#line 282 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSerialPort/sipQtSerialPortcmodule.cpp"

    return sipType;
}


extern "C" {static PyObject *slot_QSerialPort_PinoutSignal___or__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_PinoutSignal___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::PinoutSignal a0;
        QSerialPort::PinoutSignals* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QSerialPort_PinoutSignal, &a0, sipType_QSerialPort_PinoutSignals, &a1, &a1State))
        {
            QSerialPort::PinoutSignals*sipRes;

            sipRes = new QSerialPort::PinoutSignals((a0 | *a1));
            sipReleaseType(a1,sipType_QSerialPort_PinoutSignals,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_PinoutSignals,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QSerialPort_PinoutSignal[] = {
    {(void *)slot_QSerialPort_PinoutSignal___or__, or_slot},
    {0, (sipPySlotType)0}
};



extern "C" {static PyObject *slot_QSerialPort_Direction___or__(PyObject *,PyObject *);}
static PyObject *slot_QSerialPort_Direction___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPort::Direction a0;
        QSerialPort::Directions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QSerialPort_Direction, &a0, sipType_QSerialPort_Directions, &a1, &a1State))
        {
            QSerialPort::Directions*sipRes;

            sipRes = new QSerialPort::Directions((a0 | *a1));
            sipReleaseType(a1,sipType_QSerialPort_Directions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSerialPort_Directions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QSerialPort_Direction[] = {
    {(void *)slot_QSerialPort_Direction___or__, or_slot},
    {0, (sipPySlotType)0}
};

static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__SerialPortError, {0}}, sipNameNr_SerialPortError, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__DataErrorPolicy, {0}}, sipNameNr_DataErrorPolicy, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__PinoutSignal, {0}}, sipNameNr_PinoutSignal, 1, slots_QSerialPort_PinoutSignal},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__FlowControl, {0}}, sipNameNr_FlowControl, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__StopBits, {0}}, sipNameNr_StopBits, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__Parity, {0}}, sipNameNr_Parity, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__DataBits, {0}}, sipNameNr_DataBits, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__BaudRate, {0}}, sipNameNr_BaudRate, 1, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QSerialPort__Direction, {0}}, sipNameNr_Direction, 1, slots_QSerialPort_Direction},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtSerialPort_QList_0100QSerialPortInfo.mtd_base,
    &sipTypeDef_QtSerialPort_QSerialPort.super.ctd_base,
    &enumTypes[7].etd_base,
    &enumTypes[6].etd_base,
    &enumTypes[1].etd_base,
    &enumTypes[8].etd_base,
    &sipTypeDef_QtSerialPort_QSerialPort_Directions.super.ctd_base,
    &enumTypes[3].etd_base,
    &enumTypes[5].etd_base,
    &enumTypes[2].etd_base,
    &sipTypeDef_QtSerialPort_QSerialPort_PinoutSignals.super.ctd_base,
    &enumTypes[0].etd_base,
    &enumTypes[4].etd_base,
    &sipTypeDef_QtSerialPort_QSerialPortInfo.super.ctd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", 1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QSerialPort, {160, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtSerialPort = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_QtSerialPort,
    0,
    -1,
    sipStrings_QtSerialPort,
    importsTable,
    NULL,
    14,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtSerialPort;
const sipExportedModuleDef *sipModuleAPI_QtSerialPort_QtCore;

sip_qt_metaobject_func sip_QtSerialPort_qt_metaobject;
sip_qt_metacall_func sip_QtSerialPort_qt_metacall;
sip_qt_metacast_func sip_QtSerialPort_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtSerialPort
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtSerialPort
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.QtSerialPort",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt5_QtSerialPort, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_QtSerialPort), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtSerialPort = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtSerialPort = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtSerialPort == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtSerialPort,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtSerialPort_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtSerialPort_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtSerialPort_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtSerialPort_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtSerialPort,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtSerialPort_QtCore = sipModuleAPI_QtSerialPort.em_imports[0].im_module;

    SIP_MODULE_RETURN(sipModule);
}
