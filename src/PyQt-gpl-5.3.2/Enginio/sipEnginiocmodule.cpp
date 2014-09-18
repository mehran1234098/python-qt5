/*
 * Module code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:19:00 2014
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

#include "sipAPIEnginio.h"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginiocmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_Enginio[] = {
    'E', 'n', 'g', 'i', 'n', 'i', 'o', ':', ':', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'S', 't', 'a', 't', 'e', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'O', 'A', 'u', 't', 'h', '2', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 0,
    'a', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'S', 't', 'a', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 's', 's', 'i', 'o', 'n', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'U', 's', 'e', 'r', 'g', 'r', 'o', 'u', 'p', 'M', 'e', 'm', 'b', 'e', 'r', 's', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'P', 'e', 'r', 's', 'i', 's', 't', 'e', 'n', 't', 'I', 'n', 'd', 'e', 'x', 'L', 'i', 's', 't', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'F', 'a', 'i', 'l', 'u', 'r', 'e', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'P', 'e', 'r', 's', 'i', 's', 't', 'e', 'n', 't', 'I', 'n', 'd', 'e', 'x', 0,
    's', 'e', 's', 's', 'i', 'o', 'n', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'e', 'd', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'D', 'r', 'a', 'g', 'A', 'c', 't', 'i', 'o', 'n', 's', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'D', 'r', 'o', 'p', 'A', 'c', 't', 'i', 'o', 'n', 's', 0,
    'a', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'S', 't', 'a', 't', 'e', 0,
    'p', 'e', 'r', 's', 'i', 's', 't', 'e', 'n', 't', 'I', 'n', 'd', 'e', 'x', 'L', 'i', 's', 't', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', ':', ':', 'E', 'r', 'r', 'o', 'r', 'T', 'y', 'p', 'e', 0,
    'C', 'u', 's', 't', 'o', 'm', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'R', 'o', 'l', 'e', 0,
    'U', 's', 'e', 'r', 'g', 'r', 'o', 'u', 'p', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', ':', ':', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'b', 'e', 'g', 'i', 'n', 'R', 'e', 'm', 'o', 'v', 'e', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'b', 'e', 'g', 'i', 'n', 'I', 'n', 's', 'e', 'r', 't', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'r', 'l', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 's', 's', 'i', 'o', 'n', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 't', 'e', 'd', 0,
    'i', 's', 'S', 'i', 'g', 'n', 'a', 'l', 'C', 'o', 'n', 'n', 'e', 'c', 't', 'e', 'd', 0,
    's', 'e', 'n', 'd', 'e', 'r', 'S', 'i', 'g', 'n', 'a', 'l', 'I', 'n', 'd', 'e', 'x', 0,
    'r', 'e', 's', 'e', 't', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'D', 'a', 't', 'a', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'b', 'a', 'c', 'k', 'e', 'n', 'd', 'I', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'N', 'o', 't', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'e', 'd', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'b', 'e', 'g', 'i', 'n', 'M', 'o', 'v', 'e', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'e', 'n', 'd', 'R', 'e', 'm', 'o', 'v', 'e', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'e', 'n', 'd', 'I', 'n', 's', 'e', 'r', 't', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'p', 'a', 's', 's', 'w', 'o', 'r', 'd', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'I', 'd', 'e', 'n', 't', 'i', 't', 'y', 0,
    'i', 'd', 'e', 'n', 't', 'i', 't', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'O', 'b', 'j', 'e', 'c', 't', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'c', 'a', 'n', 'D', 'r', 'o', 'p', 'M', 'i', 'm', 'e', 'D', 'a', 't', 'a', 0,
    'b', 'e', 'g', 'i', 'n', 'R', 'e', 's', 'e', 't', 'M', 'o', 'd', 'e', 'l', 0,
    'b', 'e', 'g', 'i', 'n', 'R', 'e', 'm', 'o', 'v', 'e', 'R', 'o', 'w', 's', 0,
    'b', 'e', 'g', 'i', 'n', 'I', 'n', 's', 'e', 'r', 't', 'R', 'o', 'w', 's', 0,
    'n', 'e', 't', 'w', 'o', 'r', 'k', 'M', 'a', 'n', 'a', 'g', 'e', 'r', 0,
    'f', 'u', 'l', 'l', 'T', 'e', 'x', 't', 'S', 'e', 'a', 'r', 'c', 'h', 0,
    'O', 'b', 'j', 'e', 'c', 't', 'T', 'y', 'p', 'e', 'R', 'o', 'l', 'e', 0,
    'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'n', 'g', 0,
    'e', 'n', 'd', 'M', 'o', 'v', 'e', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'b', 'a', 'c', 'k', 'e', 'n', 'd', 'S', 't', 'a', 't', 'u', 's', 0,
    'c', 'l', 'i', 'e', 'n', 't', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'r', 'l', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'C', 'l', 'i', 'e', 'n', 't', 0,
    'U', 'p', 'd', 'a', 't', 'e', 'd', 'A', 't', 'R', 'o', 'l', 'e', 0,
    'C', 'r', 'e', 'a', 't', 'e', 'd', 'A', 't', 'R', 'o', 'l', 'e', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', ':', ':', 'R', 'o', 'l', 'e', 0,
    'F', 'i', 'l', 'e', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'U', 's', 'e', 'r', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'e', 'n', 'd', 'R', 'e', 's', 'e', 't', 'M', 'o', 'd', 'e', 'l', 0,
    'b', 'e', 'g', 'i', 'n', 'M', 'o', 'v', 'e', 'R', 'o', 'w', 's', 0,
    'e', 'n', 'd', 'R', 'e', 'm', 'o', 'v', 'e', 'R', 'o', 'w', 's', 0,
    'e', 'n', 'd', 'I', 'n', 's', 'e', 'r', 't', 'R', 'o', 'w', 's', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    'i', 'n', 's', 'e', 'r', 't', 'C', 'o', 'l', 'u', 'm', 'n', 's', 0,
    's', 'e', 't', 'H', 'e', 'a', 'd', 'e', 'r', 'D', 'a', 't', 'a', 0,
    'P', 'y', 'Q', 't', '5', '.', 'E', 'n', 'g', 'i', 'n', 'i', 'o', 0,
    'n', 'e', 't', 'w', 'o', 'r', 'k', 'E', 'r', 'r', 'o', 'r', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'R', 'e', 'p', 'l', 'y', 0,
    'q', 'u', 'e', 'r', 'y', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'E', 'n', 'g', 'i', 'n', 'i', 'o', 'M', 'o', 'd', 'e', 'l', 0,
    's', 'e', 't', 'B', 'a', 'c', 'k', 'e', 'n', 'd', 'I', 'd', 0,
    'B', 'a', 'c', 'k', 'e', 'n', 'd', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'e', 't', 'O', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'N', 'e', 't', 'w', 'o', 'r', 'k', 'E', 'r', 'r', 'o', 'r', 0,
    'c', 'a', 'n', 'F', 'e', 't', 'c', 'h', 'M', 'o', 'r', 'e', 0,
    'd', 'r', 'o', 'p', 'M', 'i', 'm', 'e', 'D', 'a', 't', 'a', 0,
    'u', 's', 'e', 'r', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'I', 'd', 'e', 'n', 't', 'i', 't', 'y', 0,
    'd', 'o', 'w', 'n', 'l', 'o', 'a', 'd', 'U', 'r', 'l', 0,
    's', 'e', 't', 'P', 'a', 's', 's', 'w', 'o', 'r', 'd', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'e', 'r', 'r', 'o', 'r', 'S', 't', 'r', 'i', 'n', 'g', 0,
    'e', 'n', 'd', 'M', 'o', 'v', 'e', 'R', 'o', 'w', 's', 0,
    'c', 'r', 'e', 'a', 't', 'e', 'I', 'n', 'd', 'e', 'x', 0,
    'd', 'a', 't', 'a', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'e', 't', 'I', 't', 'e', 'm', 'D', 'a', 't', 'a', 0,
    's', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'r', 'l', 0,
    'u', 'p', 'l', 'o', 'a', 'd', 'F', 'i', 'l', 'e', 0,
    'S', 'y', 'n', 'c', 'e', 'd', 'R', 'o', 'l', 'e', 0,
    'i', 's', 'F', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'e', 'c', 'o', 'd', 'e', 'D', 'a', 't', 'a', 0,
    'e', 'n', 'c', 'o', 'd', 'e', 'D', 'a', 't', 'a', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 'R', 'o', 'w', 's', 0,
    'i', 'n', 's', 'e', 'r', 't', 'R', 'o', 'w', 's', 0,
    'h', 'e', 'a', 'd', 'e', 'r', 'D', 'a', 't', 'a', 0,
    'e', 'r', 'r', 'o', 'r', 'T', 'y', 'p', 'e', 0,
    's', 'e', 't', 'C', 'l', 'i', 'e', 'n', 't', 0,
    'b', 'a', 'c', 'k', 'e', 'n', 'd', 'I', 'd', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'r', 'e', 'c', 'e', 'i', 'v', 'e', 'r', 's', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'r', 'o', 'l', 'e', 'N', 'a', 'm', 'e', 's', 0,
    'f', 'e', 't', 'c', 'h', 'M', 'o', 'r', 'e', 0,
    'm', 'i', 'm', 'e', 'T', 'y', 'p', 'e', 's', 0,
    'i', 'd', 'e', 'n', 't', 'i', 't', 'y', 0,
    'p', 'r', 'o', 't', 'o', 'c', 'o', 'l', 0,
    's', 'e', 't', 'Q', 'u', 'e', 'r', 'y', 0,
    'p', 'a', 's', 's', 'w', 'o', 'r', 'd', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    'p', 'r', 'o', 'g', 'r', 'e', 's', 's', 0,
    'm', 'i', 'm', 'e', 'D', 'a', 't', 'a', 0,
    'i', 't', 'e', 'm', 'D', 'a', 't', 'a', 0,
    'r', 'o', 'w', 'C', 'o', 'u', 'n', 't', 0,
    'f', 'i', 'n', 'i', 's', 'h', 'e', 'd', 0,
    'i', 's', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'e', 't', 'U', 's', 'e', 'r', 0,
    'N', 'o', 'E', 'r', 'r', 'o', 'r', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'e', 'n', 'a', 'b', 'l', 'e', 'd', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    's', 'e', 't', 'D', 'a', 't', 'a', 0,
    's', 'i', 'b', 'l', 'i', 'n', 'g', 0,
    'c', 'l', 'i', 'e', 'n', 't', 0,
    'u', 'p', 'd', 'a', 't', 'e', 0,
    'I', 'd', 'R', 'o', 'l', 'e', 0,
    'c', 'r', 'e', 'a', 't', 'e', 0,
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
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'r', 'e', 'm', 'o', 'v', 'e', 0,
    'a', 'p', 'p', 'e', 'n', 'd', 0,
    'r', 'e', 'v', 'e', 'r', 't', 0,
    's', 'u', 'b', 'm', 'i', 't', 0,
    'o', 'b', 'j', 'e', 'c', 't', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'q', 'u', 'e', 'r', 'y', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'm', 'a', 't', 'c', 'h', 0,
    'b', 'u', 'd', 'd', 'y', 0,
    'i', 'n', 'd', 'e', 'x', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    'u', 's', 'e', 'r', 0,
    'p', 'o', 'r', 't', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'p', 'a', 'n', 0,
    's', 'o', 'r', 't', 0,
    'd', 'a', 't', 'a', 0,
};


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_EnginioClient(void **);}
static const sipTypeDef *sipSubClass_EnginioClient(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/Enginio/enginioclient.sip"
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_EnginioReply, &sipType_EnginioReply, -1, 1},
        {sipName_EnginioModel, &sipType_EnginioModel, -1, 2},
        {sipName_EnginioClientConnection, &sipType_EnginioClientConnection, 4, 3},
        {sipName_EnginioIdentity, &sipType_EnginioIdentity, 5, -1},
        {sipName_EnginioClient, &sipType_EnginioClient, -1, -1},
        {sipName_EnginioOAuth2Authentication, &sipType_EnginioOAuth2Authentication, -1, -1},
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
#line 244 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginiocmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_Enginio__ErrorType, {0}}, sipNameNr_ErrorType, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_Enginio__Role, {0}}, sipNameNr_Role, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_Enginio__Operation, {0}}, sipNameNr_Operation, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_Enginio__AuthenticationState, {0}}, sipNameNr_AuthenticationState, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_Enginio_Enginio.super.ctd_base,
    &enumTypes[3].etd_base,
    &enumTypes[0].etd_base,
    &enumTypes[2].etd_base,
    &enumTypes[1].etd_base,
    &sipTypeDef_Enginio_EnginioClient.super.ctd_base,
    &sipTypeDef_Enginio_EnginioClientConnection.super.ctd_base,
    &sipTypeDef_Enginio_EnginioIdentity.super.ctd_base,
    &sipTypeDef_Enginio_EnginioModel.super.ctd_base,
    &sipTypeDef_Enginio_EnginioOAuth2Authentication.super.ctd_base,
    &sipTypeDef_Enginio_EnginioReply.super.ctd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", 1, NULL},
    {"PyQt5.QtNetwork", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_EnginioClient, {160, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_Enginio = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_Enginio,
    0,
    -1,
    sipStrings_Enginio,
    importsTable,
    NULL,
    11,
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
const sipAPIDef *sipAPI_Enginio;
const sipExportedModuleDef *sipModuleAPI_Enginio_QtCore;
const sipExportedModuleDef *sipModuleAPI_Enginio_QtNetwork;

sip_qt_metaobject_func sip_Enginio_qt_metaobject;
sip_qt_metacall_func sip_Enginio_qt_metacall;
sip_qt_metacast_func sip_Enginio_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_Enginio
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initEnginio
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
        "PyQt5.Enginio",
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
    sipModule = Py_InitModule(sipName_PyQt5_Enginio, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_Enginio), sip_methods);
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
    sipAPI_Enginio = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_Enginio = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_Enginio == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_Enginio,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_Enginio_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_Enginio_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_Enginio_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_Enginio_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_Enginio,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_Enginio_QtCore = sipModuleAPI_Enginio.em_imports[0].im_module;
    sipModuleAPI_Enginio_QtNetwork = sipModuleAPI_Enginio.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
