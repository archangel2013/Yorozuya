// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _quick_link
    {
        char byLinkIndex;
        unsigned __int16 wSerial;
    public:
        _quick_link()
        {
            using org_ptr = void (WINAPIV*)(struct _quick_link*);
            (org_ptr(0x14010e060L))(this);
        };
        void ctor__quick_link()
        {
            using org_ptr = void (WINAPIV*)(struct _quick_link*);
            (org_ptr(0x14010e060L))(this);
        };
        void init()
        {
            using org_ptr = void (WINAPIV*)(struct _quick_link*);
            (org_ptr(0x14010e0b0L))(this);
        };
    };
    static_assert(sizeof(_quick_link) == 0x4, "sizeof _quick_link need 0x4");
END_ATF_NAMESPACE
