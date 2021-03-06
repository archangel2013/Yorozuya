#include <CIndexListDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CIndexListctor_CIndexList2_ptr CIndexListctor_CIndexList2_next(nullptr);
        Info::CIndexListctor_CIndexList2_clbk CIndexListctor_CIndexList2_user(nullptr);
        
        Info::CIndexListCopyFront4_ptr CIndexListCopyFront4_next(nullptr);
        Info::CIndexListCopyFront4_clbk CIndexListCopyFront4_user(nullptr);
        
        Info::CIndexListFindNode6_ptr CIndexListFindNode6_next(nullptr);
        Info::CIndexListFindNode6_clbk CIndexListFindNode6_user(nullptr);
        
        Info::CIndexListGetAllNode8_ptr CIndexListGetAllNode8_next(nullptr);
        Info::CIndexListGetAllNode8_clbk CIndexListGetAllNode8_user(nullptr);
        
        Info::CIndexListGetSize10_ptr CIndexListGetSize10_next(nullptr);
        Info::CIndexListGetSize10_clbk CIndexListGetSize10_user(nullptr);
        
        Info::CIndexListIsInList12_ptr CIndexListIsInList12_next(nullptr);
        Info::CIndexListIsInList12_clbk CIndexListIsInList12_user(nullptr);
        
        Info::CIndexListIsSetting14_ptr CIndexListIsSetting14_next(nullptr);
        Info::CIndexListIsSetting14_clbk CIndexListIsSetting14_user(nullptr);
        
        Info::CIndexListPopNode_Front16_ptr CIndexListPopNode_Front16_next(nullptr);
        Info::CIndexListPopNode_Front16_clbk CIndexListPopNode_Front16_user(nullptr);
        
        Info::CIndexListPushNode_Back18_ptr CIndexListPushNode_Back18_next(nullptr);
        Info::CIndexListPushNode_Back18_clbk CIndexListPushNode_Back18_user(nullptr);
        
        Info::CIndexListResetList20_ptr CIndexListResetList20_next(nullptr);
        Info::CIndexListResetList20_clbk CIndexListResetList20_user(nullptr);
        
        Info::CIndexListSetList22_ptr CIndexListSetList22_next(nullptr);
        Info::CIndexListSetList22_clbk CIndexListSetList22_user(nullptr);
        
        
        Info::CIndexListdtor_CIndexList27_ptr CIndexListdtor_CIndexList27_next(nullptr);
        Info::CIndexListdtor_CIndexList27_clbk CIndexListdtor_CIndexList27_user(nullptr);
        
        
        void CIndexListctor_CIndexList2_wrapper(struct CIndexList* _this)
        {
           CIndexListctor_CIndexList2_user(_this, CIndexListctor_CIndexList2_next);
        };
        bool CIndexListCopyFront4_wrapper(struct CIndexList* _this, unsigned int* pdwOutIndex, char* pInfoData)
        {
           return CIndexListCopyFront4_user(_this, pdwOutIndex, pInfoData, CIndexListCopyFront4_next);
        };
        bool CIndexListFindNode6_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListFindNode6_user(_this, dwIndex, pInfoData, CIndexListFindNode6_next);
        };
        struct CIndexList::_index_node* CIndexListGetAllNode8_wrapper(struct CIndexList* _this, unsigned int* pdwMaxNodeNum)
        {
           return CIndexListGetAllNode8_user(_this, pdwMaxNodeNum, CIndexListGetAllNode8_next);
        };
        int CIndexListGetSize10_wrapper(struct CIndexList* _this)
        {
           return CIndexListGetSize10_user(_this, CIndexListGetSize10_next);
        };
        bool CIndexListIsInList12_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListIsInList12_user(_this, dwIndex, pInfoData, CIndexListIsInList12_next);
        };
        bool CIndexListIsSetting14_wrapper(struct CIndexList* _this)
        {
           return CIndexListIsSetting14_user(_this, CIndexListIsSetting14_next);
        };
        bool CIndexListPopNode_Front16_wrapper(struct CIndexList* _this, unsigned int* pdwOutIndex, char* pInfoData)
        {
           return CIndexListPopNode_Front16_user(_this, pdwOutIndex, pInfoData, CIndexListPopNode_Front16_next);
        };
        bool CIndexListPushNode_Back18_wrapper(struct CIndexList* _this, unsigned int dwIndex, char* pInfoData)
        {
           return CIndexListPushNode_Back18_user(_this, dwIndex, pInfoData, CIndexListPushNode_Back18_next);
        };
        void CIndexListResetList20_wrapper(struct CIndexList* _this)
        {
           CIndexListResetList20_user(_this, CIndexListResetList20_next);
        };
        bool CIndexListSetList22_wrapper(struct CIndexList* _this, unsigned int dwMaxBufNum, unsigned int nInfoSize, bool bUseMultiThread)
        {
           return CIndexListSetList22_user(_this, dwMaxBufNum, nInfoSize, bUseMultiThread, CIndexListSetList22_next);
        };
        
        void CIndexListdtor_CIndexList27_wrapper(struct CIndexList* _this)
        {
           CIndexListdtor_CIndexList27_user(_this, CIndexListdtor_CIndexList27_next);
        };
        
        ::std::array<hook_record, 12> CIndexList_functions = 
        {
            _hook_record {
                (LPVOID)0x1404392f0L,
                (LPVOID *)&CIndexListctor_CIndexList2_user,
                (LPVOID *)&CIndexListctor_CIndexList2_next,
                (LPVOID)cast_pointer_function(CIndexListctor_CIndexList2_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::ctor_CIndexList)
            },
            _hook_record {
                (LPVOID)0x140439be0L,
                (LPVOID *)&CIndexListCopyFront4_user,
                (LPVOID *)&CIndexListCopyFront4_next,
                (LPVOID)cast_pointer_function(CIndexListCopyFront4_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int*, char*))&CIndexList::CopyFront)
            },
            _hook_record {
                (LPVOID)0x140439e60L,
                (LPVOID *)&CIndexListFindNode6_user,
                (LPVOID *)&CIndexListFindNode6_next,
                (LPVOID)cast_pointer_function(CIndexListFindNode6_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::FindNode)
            },
            _hook_record {
                (LPVOID)0x14043a120L,
                (LPVOID *)&CIndexListGetAllNode8_user,
                (LPVOID *)&CIndexListGetAllNode8_next,
                (LPVOID)cast_pointer_function(CIndexListGetAllNode8_wrapper),
                (LPVOID)cast_pointer_function((struct CIndexList::_index_node*(CIndexList::*)(unsigned int*))&CIndexList::GetAllNode)
            },
            _hook_record {
                (LPVOID)0x14043a100L,
                (LPVOID *)&CIndexListGetSize10_user,
                (LPVOID *)&CIndexListGetSize10_next,
                (LPVOID)cast_pointer_function(CIndexListGetSize10_wrapper),
                (LPVOID)cast_pointer_function((int(CIndexList::*)())&CIndexList::GetSize)
            },
            _hook_record {
                (LPVOID)0x14043a010L,
                (LPVOID *)&CIndexListIsInList12_user,
                (LPVOID *)&CIndexListIsInList12_next,
                (LPVOID)cast_pointer_function(CIndexListIsInList12_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::IsInList)
            },
            _hook_record {
                (LPVOID)0x1404399c0L,
                (LPVOID *)&CIndexListIsSetting14_user,
                (LPVOID *)&CIndexListIsSetting14_next,
                (LPVOID)cast_pointer_function(CIndexListIsSetting14_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)())&CIndexList::IsSetting)
            },
            _hook_record {
                (LPVOID)0x140439a40L,
                (LPVOID *)&CIndexListPopNode_Front16_user,
                (LPVOID *)&CIndexListPopNode_Front16_next,
                (LPVOID)cast_pointer_function(CIndexListPopNode_Front16_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int*, char*))&CIndexList::PopNode_Front)
            },
            _hook_record {
                (LPVOID)0x140439cd0L,
                (LPVOID *)&CIndexListPushNode_Back18_user,
                (LPVOID *)&CIndexListPushNode_Back18_next,
                (LPVOID)cast_pointer_function(CIndexListPushNode_Back18_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, char*))&CIndexList::PushNode_Back)
            },
            _hook_record {
                (LPVOID)0x1404399f0L,
                (LPVOID *)&CIndexListResetList20_user,
                (LPVOID *)&CIndexListResetList20_next,
                (LPVOID)cast_pointer_function(CIndexListResetList20_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::ResetList)
            },
            _hook_record {
                (LPVOID)0x140439720L,
                (LPVOID *)&CIndexListSetList22_user,
                (LPVOID *)&CIndexListSetList22_next,
                (LPVOID)cast_pointer_function(CIndexListSetList22_wrapper),
                (LPVOID)cast_pointer_function((bool(CIndexList::*)(unsigned int, unsigned int, bool))&CIndexList::SetList)
            },
            _hook_record {
                (LPVOID)0x140439530L,
                (LPVOID *)&CIndexListdtor_CIndexList27_user,
                (LPVOID *)&CIndexListdtor_CIndexList27_next,
                (LPVOID)cast_pointer_function(CIndexListdtor_CIndexList27_wrapper),
                (LPVOID)cast_pointer_function((void(CIndexList::*)())&CIndexList::dtor_CIndexList)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
