// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct  _open_world_request_wrac
    {
        char szWorldName[33];
        char byRunMode;
        unsigned int dwWorldServerIP;
        char byHash[32];
    public:
        int size();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
