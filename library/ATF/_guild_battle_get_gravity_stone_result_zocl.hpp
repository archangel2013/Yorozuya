// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _guild_battle_get_gravity_stone_result_zocl
    {
        char byRet;
        char wszGuildName[17];
        char wszCharName[17];
        int iTakePortalInx;
        char byColor;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guild_battle_get_gravity_stone_result_zocl*);
            return (org_ptr(0x1403eafe0L))(this);
        };
    };
END_ATF_NAMESPACE
