// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;;
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->HLEDataBase->DSound.1.0.5344.inl
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetMinDistance
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetMinDistance, 5344, 9,

    XREF_CDirectSoundVoice_SetMinDistance,
    XRefZero)

        { 0x05, 0x41 },
        { 0x0C, 0x00 },
        { 0x13, 0x38 },
        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x02 },
        { 0x21, 0xF6 },
        { 0x28, 0x51 },
        { 0x2F, 0xC0 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundStream::SetMinDistance
// ******************************************************************
OOVPA_XREF(CDirectSoundStream_SetMinDistance, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x3E, XREF_CDirectSoundVoice_SetMinDistance ),

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x22, 0x05 },
        { 0x2E, 0x24 },
        { 0x3A, 0x1C },
        { 0x46, 0x74 },
        { 0x53, 0x8B },
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetDistanceFactor
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetDistanceFactor, 5344, 9,

    XREF_CDirectSoundVoice_SetDistanceFactor,
    XRefZero)

        { 0x05, 0x41 },
        { 0x0C, 0x00 },
        { 0x10, 0x08 },
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x44 },
        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x02 },
OOVPA_END;

// ******************************************************************
// * IDirectSoundBuffer_SetDistanceFactor
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetDistanceFactor, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_CDirectSoundBuffer_SetDistanceFactor ),

        { 0x03, 0x0C },
        { 0x08, 0x8B },
        { 0x0D, 0x8B },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetDopplerFactor
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetDopplerFactor, 5344, 12,

	XREF_CDirectSoundVoice_SetDopplerFactor,
    XRefZero)

        // CDirectSoundVoice_SetDopplerFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetDopplerFactor+0x12 : mov [eax+4Ch], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x4C },

        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x03 },

        // CDirectSoundVoice_SetDopplerFactor+0x31 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetMaxDistance
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetMaxDistance, 5344, 9,

    XREF_CDirectSoundVoice_SetMaxDistance,
    XRefZero)

        { 0x05, 0x41 },
        { 0x0C, 0x00 },
        { 0x13, 0x3C },
        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x02 },
        { 0x21, 0xF6 },
        { 0x28, 0x51 },
        { 0x2F, 0xC0 },
OOVPA_END;

#if 0 // Duplicate OOVPA, replacing with generic OOVPA
// ******************************************************************
// * IDirectSoundBuffer_SetMaxDistance
// ******************************************************************
OOVPA_XREF(IDirectSoundBuffer_SetMaxDistance, 5344, 1+10,

    XRefNoSaveIndex,
    XRefOne)

        // IDirectSoundBuffer_SetMaxDistance+0x1C : call [CDirectSoundBuffer::SetMaxDistance]
        XREF_ENTRY( 0x1D, XREF_CDirectSoundBuffer_SetMaxDistance ),

        { 0x00, 0xFF },
        // IDirectSoundBuffer_SetMaxDistance+0x04 : fld [esp+4+arg_4]
        { 0x04, 0xD9 },
        { 0x05, 0x44 },
        { 0x06, 0x24 },
        { 0x07, 0x0C },

        // IDirectSoundBuffer_SetMaxDistance+0x12 : add eax, 0FFFFFFE4
        { 0x12, 0x83 },
        { 0x13, 0xC0 },
        { 0x14, 0xE4 },

        // IDirectSoundBuffer_SetMaxDistance+0x21 : retn 0Ch
        { 0x22, 0x0C },
        { 0x23, 0x00 }
OOVPA_END;
#endif

#if 0 // Used 4134
// ******************************************************************
// * IDirectSound_SetRolloffFactor
// ******************************************************************
OOVPA_XREF(IDirectSound_SetRolloffFactor, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x1D, XREF_CDirectSound_SetRolloffFactor ),

        { 0x03, 0x0C },
        { 0x08, 0x8B },
        { 0x0D, 0x8B },
        { 0x12, 0x83 },
        { 0x17, 0x1B },
        { 0x1C, 0xE8 },
        { 0x21, 0xC2 },
OOVPA_END;
#endif

// ******************************************************************
// CDirectSoundVoice::SetMode
// ******************************************************************
// Generic OOVPA as of 5344 and newer
OOVPA_XREF(CDirectSoundVoice_SetMode, 5344, 14,

    XREF_CDirectSoundVoice_SetMode,
    XRefZero)

        { 0x00, 0x8B },

        { 0x09, 0xB4 },
        { 0x10, 0x08 },

        { 0x13, 0x40 },

        { 0x14, 0x8B },
        { 0x15, 0x41 },

        { 0x18, 0x80 },
        { 0x19, 0xB4 },

        { 0x1D, 0x80 },
        { 0x1F, 0x02 },
        { 0x20, 0x40 },

        { 0x2E, 0x33 },

        { 0x30, 0xC2 },
        { 0x31, 0x0C },
OOVPA_END;

// ******************************************************************
// * CDirectSound_SetPosition
// ******************************************************************
OOVPA_XREF(CDirectSound_SetPosition, 5344, 14,

    XREF_CDirectSound_SetPosition,
    XRefZero)

        // CDirectSound_SetPosition+0x00 : push ebp
        { 0x00, 0x55 },

        // CDirectSound_SetPosition+0x2B : mov ecx, [ebp+0x08]
        { 0x2B, 0x8B },
        { 0x2C, 0x4D },
        { 0x2D, 0x08 },

        // CDirectSound_SetPosition+0x2E : lea eax, [ecx+0x08]
        { 0x2E, 0x8D },
        { 0x2F, 0x41 },
        { 0x30, 0x08 },

        // CDirectSound_SetPosition+0x37 : mov [edx+0x__], edi
        { 0x37, 0x89 },
        { 0x38, 0x7A },
        //{ 0x39, 0x3C }, vs 5455 0x38

        // CDirectSound_SetPosition+0x4C : or dword ptr [eax+34h], 1
        { 0x4C, 0x83 },
        { 0x4D, 0x48 },
        //{ 0x4E, 0x34 }, vs 5455 0x30
        { 0x4F, 0x01 },

        // CDirectSound_SetPosition+0x70 : retn 0x14
        { 0x70, 0xC2 },
        { 0x71, 0x14 },
OOVPA_END;

// ******************************************************************
// * CDirectSound::SetVelocity
// ******************************************************************
OOVPA_XREF(CDirectSound_SetVelocity, 5344, 14,

    XREF_CDirectSound_SetVelocity,
    XRefZero)

        // CDirectSound_SetVelocity+0x00 : push ebp
        { 0x00, 0x55 },

        // CDirectSound_SetVelocity+0x2B : mov ecx, [ebp+0x08]
        { 0x2B, 0x8B },
        { 0x2C, 0x4D },
        { 0x2D, 0x08 },

        // CDirectSound_SetVelocity+0x2E : lea eax, [ecx+0x08]
        { 0x2E, 0x8D },
        { 0x2F, 0x41 },
        { 0x30, 0x08 },

        // CDirectSound_SetVelocity+0x37 : mov [edx+0x__], edi
        { 0x37, 0x89 },
        { 0x38, 0x7A },
        //{ 0x39, 0x48 }, vs 5455 0x44

        // CDirectSound_SetVelocity+0x4C : or dword ptr [eax+0x__], 2
        { 0x4C, 0x83 },
        { 0x4D, 0x48 },
        //{ 0x4E, 0x34 }, vs 5455 0x30
        { 0x4F, 0x02 },

        // CDirectSound_SetVelocity+0x70 : retn 0x14
        { 0x70, 0xC2 },
        { 0x71, 0x14 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoiceSettings::SetMixBins
// ******************************************************************
OOVPA_XREF(CDirectSoundVoiceSettings_SetMixBins, 5344, 7,

    XREF_CDirectSoundVoiceSettings_SetMixBins,
    XRefZero)

        { 0x10, 0x10 },
        { 0x11, 0x74 },
        { 0x12, 0x07 },
        { 0x13, 0xB8 },
        { 0x3C, 0x50 },
        { 0x4C, 0x0F },
        { 0x5C, 0x46 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetPosition
// ******************************************************************
// Generic OOVPA as of 5344 and newer
OOVPA_XREF(CDirectSoundVoice_SetPosition, 5344, 9,

    XREF_CDirectSoundVoice_SetPosition,
    XRefZero)

        // CDirectSoundVoice_SetPosition+0x00 : push ebp
        { 0x00, 0x55 },

        // CDirectSoundVoice_SetPosition+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetPosition+0x12 : mov [ecx+08h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x08 },

        // CDirectSoundVoice_SetPosition+0x50 : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetVelocity
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetVelocity, 5344, 8,

    XREF_CDirectSoundVoice_SetVelocity,
    XRefZero)

        // CDirectSoundVoice_SetVelocity+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetVelocity+0x12 : mov [ecx+14h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x14 },

        // CDirectSoundVoice_SetVelocity+0x50 : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * CDirectSound::SynchPlayback
// ******************************************************************
// Generic OOVPA as of 5344 and newer
OOVPA_XREF(CDirectSound_SynchPlayback, 5344, 1+9,

    XREF_CDirectSound_SynchPlayback,
    XRefOne)

        XREF_ENTRY( 0x31, XREF_CMcpxAPU_SynchPlayback ),

        { 0x00, 0x56 },

        { 0x07, 0x3D },
        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x2D, 0x48 },
        { 0x2E, 0x0C },
        { 0x2F, 0x57 },
        { 0x36, 0xF6 },
        { 0x3B, 0x68 },
OOVPA_END;

#if 0 // Replaced with generic OOVPA 5344(or possible lowered?)
// ******************************************************************
// * CDirectSoundVoice::SetI3DL2Source
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetI3DL2Source, 5344, 10,

    XREF_CDirectSoundVoice_SetI3DL2Source,
    XRefZero)

        // CDirectSoundVoice_SetI3DL2Source+0x12 : mov esi, [ecx]
        { 0x12, 0x8B },
        { 0x13, 0x31 },

        // CDirectSoundVoice_SetI3DL2Source+0x14 : mov [edx+80h], esi
        { 0x14, 0x89 },
        { 0x15, 0xB2 },
        { 0x16, 0x80 },

        // This asm line has change over time. Not best place to make generic
        // CDirectSoundVoice_SetI3DL2Source+0x50 : fld dword ptr [ecx+10h]
        { 0x50, 0xD9 },
        { 0x51, 0x41 },
        { 0x52, 0x10 },

        // CDirectSoundVoice_SetI3DL2Source+0xC7 : retn 0Ch
        { 0xC7, 0xC2 },
        { 0xC8, 0x0C }
OOVPA_END;
#endif

// ******************************************************************
// * CDirectSound::CommitDeferredSettings
// ******************************************************************
OOVPA_XREF(CDirectSound_CommitDeferredSettings, 5344, 11,

    XREF_CDirectSound_CommitDeferredSettings,
    XRefZero)

        // CDirectSound_CommitDeferredSettings+0x11 : movzx eax, al
        { 0x11, 0x0F },
        { 0x12, 0xB6 },
        { 0x13, 0xC0 },

        // CDirectSound_CommitDeferredSettings+0x27 : mov eax, 0x80004005
        { 0x28, 0xB8 },
        { 0x29, 0x05 },
        { 0x2A, 0x40 },
        { 0x2C, 0x80 },

        // CDirectSound_CommitDeferredSettings+0x6D : mov [eax+0x34], edi
        { 0x6E, 0x89 },
        { 0x6F, 0x78 },
        { 0x70, 0x34 },

        // CDirectSound_CommitDeferredSettings+0x97 : leave
        { 0x97, 0xC9 },
OOVPA_END;

#if 0 // Replaced with generic OOVPA 4134
// ******************************************************************
// * DirectSound::CMcpxVoiceClient::SetFilter
// ******************************************************************
OOVPA_XREF(CMcpxVoiceClient_SetFilter, 5344, 8,

    XREF_CMcpxVoiceClient_SetFilter,
    XRefZero)

        { 0x1B, 0xF6 },
        { 0x1C, 0xBA },
        { 0x1D, 0xFF },
        { 0x1E, 0xFF },
        { 0x1F, 0x00 },
        { 0x3E, 0x73 },
        { 0x5E, 0x3E },
        { 0x7E, 0x0B },
OOVPA_END;
#endif

#if 0 // Used 4361
// ******************************************************************
// * DirectSound::CDirectSoundBuffer::StopEx
// ******************************************************************
OOVPA_XREF(CDirectSoundBuffer_StopEx, 5344, 9,

    XREF_CDirectSoundBuffer_StopEx,
    XRefZero)

        { 0x0C, 0x00 },
        { 0x16, 0x68 },
        { 0x25, 0x80 },
        { 0x26, 0xEB },
        { 0x27, 0x2D },
        { 0x28, 0x8B },
        { 0x30, 0xFF },
        { 0x41, 0x85 },
        { 0x47, 0x68 },
OOVPA_END;
#endif
#if 0 // Replaced with generic OOVPA 3911
// ******************************************************************
// * IDirectSound_SetEffectData
// ******************************************************************
OOVPA_NO_XREF(IDirectSound_SetEffectData, 5344, 7)

        { 0x04, 0x75 },
        { 0x0A, 0x75 },
        { 0x10, 0x14 },
        { 0x16, 0x10 },
        { 0x1C, 0x1B },
        { 0x26, 0x5D },
        { 0x28, 0x18 },
OOVPA_END;
#endif
// ******************************************************************
// * DirectSound::CDirectSound::EnableHeadphones
// ******************************************************************
OOVPA_XREF(CDirectSound_EnableHeadphones, 5344, 9,

    XREF_CDirectSound_EnableHeadphones,
    XRefZero)

        { 0x04, 0x51 },
        { 0x05, 0x83 },
        { 0x06, 0x65 },
        { 0x07, 0xFC },
        { 0x08, 0x00 },
        { 0x09, 0xE8 },
        { 0x2D, 0x05 },
        { 0x3D, 0x08 },
        { 0x4D, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetAllParameters
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetAllParameters, 5344, 10,

    XREF_CDirectSoundVoice_SetAllParameters,
    XRefZero)

        { 0x00, 0x8B },
        { 0x0C, 0x50 },
        { 0x10, 0xB4 },
        { 0x13, 0x00 },
        { 0x14, 0xD9 },
        { 0x15, 0x5A },
        { 0x16, 0x08 },
        { 0x17, 0xD9 },
        { 0x1E, 0x92 },
        { 0x21, 0x00 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetConeOutsideVolume
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetConeOutsideVolume, 5344, 12,

    XREF_CDirectSoundVoice_SetConeOutsideVolume,
    XRefZero)

        // CDirectSoundVoice_SetConeOutsideVolume+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetConeOutsideVolume+0x11 : mov [eax+34h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x34 },

        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x02 },

        // CDirectSoundVoice_SetConeOutsideVolume+0x30 : retn 0Ch
        { 0x31, 0x0C },
        { 0x32, 0x00 }
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetRolloffFactor
// ******************************************************************
// Generic OOVPA as of 5344 and newer
OOVPA_XREF(CDirectSoundVoice_SetRolloffFactor, 5344, 13,

    XREF_CDirectSoundVoice_SetRolloffFactor,
    XRefZero)

        // CDirectSoundVoice_SetRolloffFactor+0x00 : mov ecx,dword ptr [esp+4]
        { 0x00, 0x8B },

        // CDirectSoundVoice_SetRolloffFactor+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetRolloffFactor+0x11 : mov [eax+48h], edx
        { 0x11, 0x89 },
        { 0x12, 0x50 },
        { 0x13, 0x48 },

        { 0x14, 0x8B },
        { 0x1D, 0x80 },
        { 0x1F, 0x03 },

        // CDirectSoundVoice_SetRolloffFactor+0x30 : retn 0Ch
        { 0x30, 0xC2 },
        { 0x31, 0x0C }
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSoundVoice::SetRolloffCurve
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetRolloffCurve, 5344, 8,

    XREF_CDirectSoundVoice_SetRolloffCurve,
    XRefZero)

        { 0x07, 0x8B },
        { 0x10, 0x08 },
        { 0x11, 0x89 },
        { 0x12, 0x51 },
        { 0x13, 0x50 },
        { 0x14, 0x8B },
        { 0x3E, 0x33 },
        { 0x40, 0xC2 },
OOVPA_END;

// ******************************************************************
// * WaveFormat::CreateXboxAdpcmFormat
// ******************************************************************
OOVPA_XREF(WaveFormat_CreateXboxAdpcmFormat, 5344, 7,

    XREF_WaveFormat_CreateXboxAdpcmFormat,
    XRefZero)

        { 0x07, 0x08 },
        { 0x10, 0xE9 },
        { 0x19, 0x8D },
        { 0x22, 0x66 },
        { 0x2B, 0x04 },
        { 0x34, 0x66 },
        { 0x3D, 0x12 },
OOVPA_END;

// ******************************************************************
// * XAudioCreateAdpcmFormat
// ******************************************************************
OOVPA_XREF(XAudioCreateAdpcmFormat, 5344, 1+1,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x01, XREF_WaveFormat_CreateXboxAdpcmFormat ),

        { 0x00, 0xE9 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetConeAngles
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetConeAngles, 5344, 9,

    XREF_CDirectSoundVoice_SetConeAngles,
    XRefZero)

        // CDirectSoundVoice_SetConeAngles+0x0D : mov edx, [esp+arg_4]
        { 0x0D, 0x8B },
        { 0x0E, 0x54 },
        { 0x0F, 0x24 },
        { 0x10, 0x08 },

        // CDirectSoundVoice_SetConeAngles+0x11 : mov [ecx+20h], edx
        { 0x11, 0x89 },
        { 0x12, 0x51 },
        { 0x13, 0x20 },

        // CDirectSoundVoice_SetConeAngles+0x40 : retn 10h
        { 0x41, 0x10 },
        { 0x42, 0x00 }
OOVPA_END;

// ******************************************************************
// * CDirectSoundVoice::SetConeOrientation
// ******************************************************************
OOVPA_XREF(CDirectSoundVoice_SetConeOrientation, 5344, 8,

    XREF_CDirectSoundVoice_SetConeOrientation,
    XRefZero)

        // CDirectSoundVoice_SetConeOrientation+0x0F : mov edx, [ebp+arg_4]
        { 0x0F, 0x8B },
        { 0x10, 0x55 },
        { 0x11, 0x0C },

        // CDirectSoundVoice_SetConeOrientation+0x12 : mov [ecx+28h], edx
        { 0x12, 0x89 },
        { 0x13, 0x51 },
        { 0x14, 0x28 },

        // CDirectSoundVoice_SetConeOrientation+0x4F : retn 14h
        { 0x50, 0x14 },
        { 0x51, 0x00 }
OOVPA_END;

// ******************************************************************
// * CMcpxStream_Flush
// ******************************************************************
OOVPA_XREF(CMcpxStream_Flush, 5344, 11,
    XREF_CMcpxStream_Flush,
    XRefZero)

        { 0x00, 0x55 },
        { 0x01, 0x8B },

        { 0x12, 0x33 },

        { 0x3D, 0x83 },
        { 0x3E, 0xFE },
        { 0x3F, 0x06 },

        { 0x4E, 0xE8 },

        { 0x66, 0xE8 },

        { 0xDD, 0xC9 },
        { 0xDE, 0xC2 },
        { 0xDF, 0x04 },
OOVPA_END;

// ******************************************************************
// * CDirectSoundStream_Flush
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSoundStream_Flush, 5344, 1+8,
    XRefNoSaveIndex,
    XRefOne)

        //CDirectSoundStream_Flush+0x31 : call [CMcpxStream_Flush]
        XREF_ENTRY( 0x32, XREF_CMcpxStream_Flush ),

        { 0x00, 0x56 },

        { 0x28, 0x8B },
        { 0x2B, 0x08 },

        { 0x2C, 0x8B },
        { 0x2E, 0x24 },

        { 0x31, 0xE8 },

        //CDirectSoundStream_Flush+0x48 : ret 4
        { 0x48, 0xC2 },
        { 0x49, 0x04 },
OOVPA_END;

// ******************************************************************
// * CMcpxStream_Discontinuity
// ******************************************************************
OOVPA_XREF(CMcpxStream_Discontinuity, 5344, 9,
    XREF_CMcpxStream_Discontinuity,
    XRefZero)

        // CMcpxStream_Discontinuity+0x00 : push esi; push edi
        { 0x00, 0x56 },
        { 0x01, 0x57 },

        // CMcpxStream_Discontinuity+0x12 : mov dx,0x800
        { 0x12, 0x66 },
        { 0x13, 0xBA },
        { 0x14, 0x00 },
        { 0x15, 0x08 },

        // CMcpxStream_Discontinuity+0x23 : call Stop@CMcpxStream@DirectSound@@QAEJ_JK@Z
        { 0x23, 0xE8 },

        // CMcpxStream_Discontinuity+0x2D : pop esi; ret
        { 0x2D, 0x5E },
        { 0x2E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * CMcpxVoiceClient::SetMixBins
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CMcpxVoiceClient_SetMixBins, 5344, 14,

    XREF_CMcpxVoiceClient_SetMixBins,
    XRefZero)

        // CMcpxVoiceClient_SetMixBins+0x00 : push ebp
        { 0x00, 0x55 },

        // CMcpxVoiceClient_SetMixBins+0x24 : lea eax, [ebp-4]
        { 0x24, 0x8D },
        { 0x25, 0x45 },
        { 0x26, 0xFC },

        // CMcpxVoiceClient_SetMixBins+0x2F : lea eax, [esi-0x30]
        { 0x2F, 0x8D },
        { 0x30, 0x45 },
        { 0x31, 0xD0 },

        // CMcpxVoiceClient_SetMixBins+0x5A : mov ds:[0xFE8202F8], eax
        { 0x5E, 0xA3 },
        { 0x5F, 0xF8 },
        { 0x60, 0x02 },
        { 0x61, 0x82 },
        { 0x62, 0xFE },

        // CMcpxVoiceClient_SetMixBins+0xBF : leave; retn
        { 0xBF, 0xC9 },
        { 0xC0, 0xC3 },
OOVPA_END;

#if 0
// ******************************************************************
// * CDirectSoundVoice::SetMixBins
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSoundVoice_SetMixBins, 5344, 1+7,

    XREF_CDirectSoundVoice_SetMixBins,
    XRefOne)

        XREF_ENTRY( 0x15, XREF_CMcpxVoiceClient_SetMixBins ),

        { 0x02, 0x74 },
        { 0x06, 0x74 },
        { 0x0A, 0x4E },
        { 0x11, 0x8B },
        { 0x12, 0x4E },
        { 0x19, 0x5E },
        { 0x1A, 0xC2 },
OOVPA_END;
#endif
// ******************************************************************
// * CDirectSoundVoice::SetI3DL2Source
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSoundVoice_SetI3DL2Source, 5344, 15,

    XREF_CDirectSoundVoice_SetI3DL2Source,
    XRefZero)

        // CDirectSoundVoice_SetI3DL2Source+0x12 : mov esi, [ecx]
        { 0x12, 0x8B },
        { 0x13, 0x31 },

        // CDirectSoundVoice_SetI3DL2Source+0x14 : mov [edx+80h], esi
        { 0x14, 0x89 },
        { 0x15, 0xB2 },
        { 0x16, 0x80 },

        // CDirectSoundVoice_SetI3DL2Source+0xB3 : or byte ptr [ecx+7Eh],7Fh
        { 0xB3, 0x80 },
        { 0xB4, 0x49 },
        //{ 0xB5, 0x7E }, //0x7E is known for 5344 and later, not sure about earlier.
        { 0xB6, 0x7F },

        // CDirectSoundVoice_SetI3DL2Source+0x50 : test byte ptr [esp+10h],1
        { 0xB7, 0xF6 },
        { 0xB8, 0x44 },
        { 0xB9, 0x24 },
        { 0xBA, 0x10 },
        { 0xBB, 0x01 },

        // CDirectSoundVoice_SetI3DL2Source+0xC7 : retn 0Ch
        { 0xC7, 0xC2 },
        { 0xC8, 0x0C }
OOVPA_END;

// ******************************************************************
// * CDirectSound::SetDistanceFactor
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSound_SetDistanceFactor, 5344, 14,

    XREF_CDirectSound_SetDistanceFactor,
    XRefZero)

        // CDirectSound_SetDistanceFactor+0x00 : push esi
        { 0x00, 0x56 },

        // CDirectSound_SetDistanceFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 },
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSound_SetDistanceFactor+0x33 : mov [eax+0x__], edx
        { 0x33, 0x89 },
        { 0x34, 0x50 },
        //{ 0x35, 0x74 }, vs 5455 0x70

        // CDirectSound_SetDistanceFactor+0x39 : or dword ptr[eax+0x__], 0x08
        { 0x39, 0x83 },
        { 0x3A, 0x48 },
        //{ 0x3B, 0x34 }, vs 5455 0x30
        { 0x3C, 0x08 },

        { 0x3F, 0x24 },

        // CDirectSound_SetDistanceFactor+0x4C : jz +0x0B
        { 0x4C, 0x74 },
        { 0x4D, 0x0B },
OOVPA_END;

// ******************************************************************
// * CDirectSound::SetDopplerFactor
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSound_SetDopplerFactor, 5344, 14,

    XREF_CDirectSound_SetDopplerFactor,
    XRefZero)

        // CDirectSound_SetDopplerFactor+0x00 : push esi
        { 0x00, 0x56 },

        // CDirectSound_SetDopplerFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 },
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSound_SetDopplerFactor+0x33 : mov [eax+0x__], edx
        { 0x33, 0x89 },
        { 0x34, 0x50 },
        //{ 0x35, 0x74 }, vs 5455 0x70

        // CDirectSound_SetDopplerFactor+0x39 : or dword ptr[eax+0x__], 0x20
        { 0x39, 0x83 },
        { 0x3A, 0x48 },
        //{ 0x3B, 0x34 }, vs 5455 0x30
        { 0x3C, 0x20 },

        { 0x3F, 0x24 },

        // CDirectSound_SetDopplerFactor+0x4C : jz +0x0B
        { 0x4C, 0x74 },
        { 0x4D, 0x0B },
OOVPA_END;

// ******************************************************************
// * CDirectSound::SetRolloffFactor
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSound_SetRolloffFactor, 5344, 14,

    XREF_CDirectSound_SetRolloffFactor,
    XRefZero)

        // CDirectSound_SetRolloffFactor+0x00 : push esi
        { 0x00, 0x56 },

        // CDirectSound_SetRolloffFactor+0x21 : mov eax, 0x80004005
        { 0x21, 0xB8 },
        { 0x22, 0x05 },
        { 0x23, 0x40 },
        { 0x24, 0x00 },
        { 0x25, 0x80 },

        // CDirectSound_SetRolloffFactor+0x33 : mov [eax+0x__], edx
        { 0x33, 0x89 },
        { 0x34, 0x50 },
        //{ 0x35, 0x74 }, vs 5455 0x70

        // CDirectSound_SetRolloffFactor+0x39 : or dword ptr[eax+0x__], 0x10
        { 0x39, 0x83 },
        { 0x3A, 0x48 },
        //{ 0x3B, 0x34 }, vs 5455 0x30
        { 0x3C, 0x10 },

        { 0x3F, 0x24 },

        // CDirectSound_SetRolloffFactor+0x4C : jz +0x0B
        { 0x4C, 0x74 },
        { 0x4D, 0x0B },
OOVPA_END;

// ******************************************************************
// * DirectSound::CDirectSound::SetI3DL2Listener
// ******************************************************************
// Generic OOVPA as of ____? and newer
OOVPA_XREF(CDirectSound_SetI3DL2Listener, 5344, 20,

    XREF_CDirectSound_SetI3DL2Listener,
    XRefZero)

        // CDirectSound_SetI3DL2Listener+0x00 : push esi
        { 0x00, 0x56 },

        // CDirectSound_SetI3DL2Listener+0x3A : mov edi,88780032h (unchanged since 3911)
        { 0x3A, 0xBF },
        //{ 0x3B, 0x32 },
        //{ 0x3C, 0x00 },
        //{ 0x3D, 0x78 },
        { 0x3E, 0x88 },

        // CDirectSound_SetI3DL2Listener+0x51 : mov ebx,dword ptr [ecx+4]
        { 0x51, 0x8B },
        { 0x52, 0x59 },
        { 0x53, 0x04 },

        // CDirectSound_SetI3DL2Listener+0x54 : mov edx,dword ptr [eax+8]
        { 0x54, 0x8B },
        { 0x55, 0x50 },
        { 0x56, 0x08 },

        // CDirectSound_SetI3DL2Listener+0x99 : mov ebx,dword ptr [ecx+1Ch]
        { 0x99, 0x8B },
        { 0x9A, 0x59 },
        { 0x9B, 0x1C },

        // CDirectSound_SetI3DL2Listener+0xD8 : or word ptr [ecx+__h],0FFFh
        { 0xD8, 0x66 },
        { 0xD9, 0x81 },
        { 0xDA, 0x89 },
        //{ 0xDB, 0x84 }, vs 5455 0x80
        { 0xDC, 0x00 },
        //{ 0xDD, 0x00 },
        //{ 0xDE, 0x00 },
        { 0xDF, 0xFF },
        { 0xE0, 0x0F },

        // CDirectSound_SetI3DL2Listener+0x102 : retn 0x0C
        { 0x102, 0xC2 },
        { 0x103, 0x0C },
OOVPA_END;

// ******************************************************************
// * DirectSound::CHRTFSource::SetFullHRTF5Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(CHRTFSource_SetFullHRTF5Channel, 5344, 16,

    XREF_CHRTFSource_SetFullHRTF5Channel,
    XRefZero)

        { 0x00, 0xC7 },
        { 0x0A, 0xC7 },
        { 0x14, 0xC7 },
        { 0x1E, 0xC7 },
        { 0x28, 0xC7 },
        { 0x32, 0xC7 },
        { 0x3C, 0xC7 },
        { 0x46, 0xC7 },
        { 0x50, 0xC7 },
        { 0x5A, 0xC7 },
        { 0x64, 0xC7 },

        { 0x6A, 0x03 },
        { 0x6B, 0x00 },
        { 0x6C, 0x00 },
        { 0x6D, 0x00 },

        { 0x6E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CHRTFSource::SetLightHRTF5Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(CHRTFSource_SetLightHRTF5Channel, 5344, 16,

    XREF_CHRTFSource_SetLightHRTF5Channel,
    XRefZero)

        { 0x00, 0xC7 },
        { 0x0A, 0xC7 },
        { 0x14, 0xC7 },
        { 0x1E, 0xC7 },
        { 0x28, 0xC7 },
        { 0x32, 0xC7 },
        { 0x3C, 0xC7 },
        { 0x46, 0xC7 },
        { 0x50, 0xC7 },
        { 0x5A, 0xC7 },
        { 0x64, 0xC7 },

        { 0x6A, 0x04 },
        { 0x6B, 0x00 },
        { 0x6C, 0x00 },
        { 0x6D, 0x00 },

        { 0x6E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CHRTFSource::SetFullHRTF4Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(CHRTFSource_SetFullHRTF4Channel, 5344, 16,

    XREF_CHRTFSource_SetFullHRTF4Channel,
    XRefZero)

        { 0x00, 0xC7 },
        { 0x0A, 0xC7 },
        { 0x14, 0xC7 },
        { 0x1E, 0xC7 },
        { 0x28, 0xC7 },
        { 0x32, 0xC7 },
        { 0x3C, 0xC7 },
        { 0x46, 0xC7 },
        { 0x50, 0xC7 },
        { 0x5A, 0xC7 },
        { 0x64, 0xC7 },

        { 0x6A, 0x01 },
        { 0x6B, 0x00 },
        { 0x6C, 0x00 },
        { 0x6D, 0x00 },

        { 0x6E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSound::CHRTFSource::SetLightHRTF4Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(CHRTFSource_SetLightHRTF4Channel, 5344, 16,

    XREF_CHRTFSource_SetLightHRTF4Channel,
    XRefZero)

        { 0x00, 0xC7 },
        { 0x0A, 0xC7 },
        { 0x14, 0xC7 },
        { 0x1E, 0xC7 },
        { 0x28, 0xC7 },
        { 0x32, 0xC7 },
        { 0x3C, 0xC7 },
        { 0x46, 0xC7 },
        { 0x50, 0xC7 },
        { 0x5A, 0xC7 },
        { 0x64, 0xC7 },

        { 0x6A, 0x02 },
        { 0x6B, 0x00 },
        { 0x6C, 0x00 },
        { 0x6D, 0x00 },

        { 0x6E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSoundUseLightHRTF
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(DirectSoundUseLightHRTF, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x0A, XREF_CHRTFSource_SetLightHRTF5Channel ),

        { 0x06, 0x0F },
        { 0x07, 0xB6 },
        { 0x0E, 0x85 },
        { 0x0F, 0xF6 },
        { 0x12, 0x0B },
        { 0x18, 0xFF },
        { 0x1E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSoundUseFullHRTF4Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(DirectSoundUseFullHRTF4Channel, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x0A, XREF_CHRTFSource_SetFullHRTF4Channel ),

        { 0x06, 0x0F },
        { 0x07, 0xB6 },
        { 0x0E, 0x85 },
        { 0x0F, 0xF6 },
        { 0x12, 0x0B },
        { 0x18, 0xFF },
        { 0x1E, 0xC3 },
OOVPA_END;

// ******************************************************************
// * DirectSoundUseLightHRTF4Channel
// ******************************************************************
// Generic OOVPA as of 5344 and newer.
OOVPA_XREF(DirectSoundUseLightHRTF4Channel, 5344, 1+7,

    XRefNoSaveIndex,
    XRefOne)

        XREF_ENTRY( 0x0A, XREF_CHRTFSource_SetLightHRTF4Channel ),

        { 0x06, 0x0F },
        { 0x07, 0xB6 },
        { 0x0E, 0x85 },
        { 0x0F, 0xF6 },
        { 0x12, 0x0B },
        { 0x18, 0xFF },
        { 0x1E, 0xC3 },
OOVPA_END;


// ******************************************************************
// * Rollback support signature(s)
// ******************************************************************
#define DirectSoundUseFullHRTF_5344 DirectSoundUseFullHRTF_4134 // In theory... TBD.
