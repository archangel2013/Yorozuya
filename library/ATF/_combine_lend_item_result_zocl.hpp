// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _combine_lend_item_result_zocl
    {
        struct _lend_item
        {
            char byTblCode;
            unsigned __int16 wItemIdx;
            unsigned int dwDur;
            unsigned int dwUp;
            unsigned int dwItemSerial;
            char byCsMethod;
            unsigned int dwT;
        };
        char byErrorCode;
        unsigned int dwFee;
        unsigned int dwLeftDalant;
        _lend_item Item;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _combine_lend_item_result_zocl*);
            return (org_ptr(0x1400ef260L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
