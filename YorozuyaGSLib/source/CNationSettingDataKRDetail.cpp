#include <CNationSettingDataKRDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataKRctor_CNationSettingDataKR2_ptr CNationSettingDataKRctor_CNationSettingDataKR2_next(nullptr);
        Info::CNationSettingDataKRctor_CNationSettingDataKR2_clbk CNationSettingDataKRctor_CNationSettingDataKR2_user(nullptr);
        
        Info::CNationSettingDataKRCreateBilling4_ptr CNationSettingDataKRCreateBilling4_next(nullptr);
        Info::CNationSettingDataKRCreateBilling4_clbk CNationSettingDataKRCreateBilling4_user(nullptr);
        
        Info::CNationSettingDataKRCreateWorker6_ptr CNationSettingDataKRCreateWorker6_next(nullptr);
        Info::CNationSettingDataKRCreateWorker6_clbk CNationSettingDataKRCreateWorker6_user(nullptr);
        
        Info::CNationSettingDataKRGetCashItemPrice8_ptr CNationSettingDataKRGetCashItemPrice8_next(nullptr);
        Info::CNationSettingDataKRGetCashItemPrice8_clbk CNationSettingDataKRGetCashItemPrice8_user(nullptr);
        
        Info::CNationSettingDataKRGetItemName10_ptr CNationSettingDataKRGetItemName10_next(nullptr);
        Info::CNationSettingDataKRGetItemName10_clbk CNationSettingDataKRGetItemName10_user(nullptr);
        
        Info::CNationSettingDataKRInit12_ptr CNationSettingDataKRInit12_next(nullptr);
        Info::CNationSettingDataKRInit12_clbk CNationSettingDataKRInit12_user(nullptr);
        
        Info::CNationSettingDataKRIsNormalChar14_ptr CNationSettingDataKRIsNormalChar14_next(nullptr);
        Info::CNationSettingDataKRIsNormalChar14_clbk CNationSettingDataKRIsNormalChar14_user(nullptr);
        
        Info::CNationSettingDataKRReadSystemPass16_ptr CNationSettingDataKRReadSystemPass16_next(nullptr);
        Info::CNationSettingDataKRReadSystemPass16_clbk CNationSettingDataKRReadSystemPass16_user(nullptr);
        
        Info::CNationSettingDataKRSendCashDBDSNRequest18_ptr CNationSettingDataKRSendCashDBDSNRequest18_next(nullptr);
        Info::CNationSettingDataKRSendCashDBDSNRequest18_clbk CNationSettingDataKRSendCashDBDSNRequest18_user(nullptr);
        
        
        void CNationSettingDataKRctor_CNationSettingDataKR2_wrapper(struct CNationSettingDataKR* _this)
        {
           CNationSettingDataKRctor_CNationSettingDataKR2_user(_this, CNationSettingDataKRctor_CNationSettingDataKR2_next);
        };
        struct CBilling* CNationSettingDataKRCreateBilling4_wrapper(struct CNationSettingDataKR* _this)
        {
           return CNationSettingDataKRCreateBilling4_user(_this, CNationSettingDataKRCreateBilling4_next);
        };
        struct CashDbWorker* CNationSettingDataKRCreateWorker6_wrapper(struct CNationSettingDataKR* _this)
        {
           return CNationSettingDataKRCreateWorker6_user(_this, CNationSettingDataKRCreateWorker6_next);
        };
        int CNationSettingDataKRGetCashItemPrice8_wrapper(struct CNationSettingDataKR* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataKRGetCashItemPrice8_user(_this, pFld, CNationSettingDataKRGetCashItemPrice8_next);
        };
        char* CNationSettingDataKRGetItemName10_wrapper(struct CNationSettingDataKR* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataKRGetItemName10_user(_this, pFld, CNationSettingDataKRGetItemName10_next);
        };
        int CNationSettingDataKRInit12_wrapper(struct CNationSettingDataKR* _this)
        {
           return CNationSettingDataKRInit12_user(_this, CNationSettingDataKRInit12_next);
        };
        bool CNationSettingDataKRIsNormalChar14_wrapper(struct CNationSettingDataKR* _this, wchar_t wcChar)
        {
           return CNationSettingDataKRIsNormalChar14_user(_this, wcChar, CNationSettingDataKRIsNormalChar14_next);
        };
        bool CNationSettingDataKRReadSystemPass16_wrapper(struct CNationSettingDataKR* _this)
        {
           return CNationSettingDataKRReadSystemPass16_user(_this, CNationSettingDataKRReadSystemPass16_next);
        };
        void CNationSettingDataKRSendCashDBDSNRequest18_wrapper(struct CNationSettingDataKR* _this)
        {
           CNationSettingDataKRSendCashDBDSNRequest18_user(_this, CNationSettingDataKRSendCashDBDSNRequest18_next);
        };
        
        ::std::array<hook_record, 9> CNationSettingDataKR_functions = 
        {
            _hook_record {
                (LPVOID)0x14022b160L,
                (LPVOID *)&CNationSettingDataKRctor_CNationSettingDataKR2_user,
                (LPVOID *)&CNationSettingDataKRctor_CNationSettingDataKR2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRctor_CNationSettingDataKR2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataKR::*)())&CNationSettingDataKR::ctor_CNationSettingDataKR)
            },
            _hook_record {
                (LPVOID)0x14022b3f0L,
                (LPVOID *)&CNationSettingDataKRCreateBilling4_user,
                (LPVOID *)&CNationSettingDataKRCreateBilling4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRCreateBilling4_wrapper),
                (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataKR::*)())&CNationSettingDataKR::CreateBilling)
            },
            _hook_record {
                (LPVOID)0x14022b340L,
                (LPVOID *)&CNationSettingDataKRCreateWorker6_user,
                (LPVOID *)&CNationSettingDataKRCreateWorker6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRCreateWorker6_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataKR::*)())&CNationSettingDataKR::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x14022b4a0L,
                (LPVOID *)&CNationSettingDataKRGetCashItemPrice8_user,
                (LPVOID *)&CNationSettingDataKRGetCashItemPrice8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRGetCashItemPrice8_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataKR::*)(struct _CashShop_str_fld*))&CNationSettingDataKR::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022b320L,
                (LPVOID *)&CNationSettingDataKRGetItemName10_user,
                (LPVOID *)&CNationSettingDataKRGetItemName10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRGetItemName10_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataKR::*)(struct _NameTxt_fld*))&CNationSettingDataKR::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022b230L,
                (LPVOID *)&CNationSettingDataKRInit12_user,
                (LPVOID *)&CNationSettingDataKRInit12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRInit12_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataKR::*)())&CNationSettingDataKR::Init)
            },
            _hook_record {
                (LPVOID)0x14022b1c0L,
                (LPVOID *)&CNationSettingDataKRIsNormalChar14_user,
                (LPVOID *)&CNationSettingDataKRIsNormalChar14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRIsNormalChar14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataKR::*)(wchar_t))&CNationSettingDataKR::IsNormalChar)
            },
            _hook_record {
                (LPVOID)0x14022b4d0L,
                (LPVOID *)&CNationSettingDataKRReadSystemPass16_user,
                (LPVOID *)&CNationSettingDataKRReadSystemPass16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRReadSystemPass16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataKR::*)())&CNationSettingDataKR::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x14022b4c0L,
                (LPVOID *)&CNationSettingDataKRSendCashDBDSNRequest18_user,
                (LPVOID *)&CNationSettingDataKRSendCashDBDSNRequest18_next,
                (LPVOID)cast_pointer_function(CNationSettingDataKRSendCashDBDSNRequest18_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataKR::*)())&CNationSettingDataKR::SendCashDBDSNRequest)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
