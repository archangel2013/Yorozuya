// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HRSRC__.hpp>
#include <HWND__.hpp>
#include <_GUID.hpp>


START_ATF_NAMESPACE
    struct tagOLEUICHANGEICONA
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        HWND__ *hWndOwner;
        const char *lpszCaption;
        unsigned int (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lCustData;
        HINSTANCE__ *hInstance;
        const char *lpszTemplate;
        HRSRC__ *hResource;
        void *hMetaPict;
        _GUID clsid;
        char szIconExe[260];
        int cchIconExe;
    };
END_ATF_NAMESPACE
