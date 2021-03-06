// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ListHeap.hpp>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    struct LendItemSheet
    {
        enum NUM
        {
            max_lenditem_num = 0xC8,
        };
        struct Cell
        {
            char _nStorageCode;
            _STORAGE_LIST::_db_con *_pkItem;
            unsigned int _dwEndTime;
        public:
            Cell(char byStCode, struct _STORAGE_LIST::_db_con* pItem);
            void ctor_Cell(char byStCode, struct _STORAGE_LIST::_db_con* pItem);
            Cell();
            void ctor_Cell();
        };
        struct CPlayer * _pkOwner;
        ListHeap<Cell> _heapFixRow;
    public:
        int CheckTime();
        bool DeleteLink(char byStorageCode, struct _STORAGE_LIST::_db_con* pItem);
        bool Initialzie();
        bool InsertLink(char byStorageCode, struct _STORAGE_LIST::_db_con* pkItem);
        LendItemSheet(struct CPlayer* p);
        void ctor_LendItemSheet(struct CPlayer* p);
        void Release();
        ~LendItemSheet();
        void dtor_LendItemSheet();
    };
END_ATF_NAMESPACE
