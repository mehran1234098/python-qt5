/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:51 2014
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

#include "sipAPIQtMultimedia.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qaudio.sip"
#include <qaudio.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudio.cpp"


static sipEnumMemberDef enummembers_QAudio[] = {
    {sipName_ActiveState, static_cast<int>(QAudio::ActiveState), 8},
    {sipName_AudioInput, static_cast<int>(QAudio::AudioInput), 7},
    {sipName_AudioOutput, static_cast<int>(QAudio::AudioOutput), 7},
    {sipName_FatalError, static_cast<int>(QAudio::FatalError), 6},
    {sipName_IOError, static_cast<int>(QAudio::IOError), 6},
    {sipName_IdleState, static_cast<int>(QAudio::IdleState), 8},
    {sipName_NoError, static_cast<int>(QAudio::NoError), 6},
    {sipName_OpenError, static_cast<int>(QAudio::OpenError), 6},
    {sipName_StoppedState, static_cast<int>(QAudio::StoppedState), 8},
    {sipName_SuspendedState, static_cast<int>(QAudio::SuspendedState), 8},
    {sipName_UnderrunError, static_cast<int>(QAudio::UnderrunError), 6},
};


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAudio = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_NAMESPACE,
        sipNameNr_QAudio,
        {0}
    },
    {
        sipNameNr_QAudio,
        {0, 0, 1},
        0, 0,
        11, enummembers_QAudio,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
