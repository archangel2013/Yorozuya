#include <RACE_BOSS_MSG__CMsgListManagerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace RACE_BOSS_MSG
    {
        namespace Detail
        {
            
            Info::RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_ptr RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_clbk RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerCancel4_ptr RACE_BOSS_MSG__CMsgListManagerCancel4_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerCancel4_clbk RACE_BOSS_MSG__CMsgListManagerCancel4_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerCleanUp6_ptr RACE_BOSS_MSG__CMsgListManagerCleanUp6_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerCleanUp6_clbk RACE_BOSS_MSG__CMsgListManagerCleanUp6_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_ptr RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_clbk RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_ptr RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_clbk RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_ptr RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_clbk RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerInit14_ptr RACE_BOSS_MSG__CMsgListManagerInit14_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerInit14_clbk RACE_BOSS_MSG__CMsgListManagerInit14_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_ptr RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_clbk RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerLoad18_ptr RACE_BOSS_MSG__CMsgListManagerLoad18_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerLoad18_clbk RACE_BOSS_MSG__CMsgListManagerLoad18_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerRefresh20_ptr RACE_BOSS_MSG__CMsgListManagerRefresh20_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerRefresh20_clbk RACE_BOSS_MSG__CMsgListManagerRefresh20_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerRelease22_ptr RACE_BOSS_MSG__CMsgListManagerRelease22_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerRelease22_clbk RACE_BOSS_MSG__CMsgListManagerRelease22_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerSave24_ptr RACE_BOSS_MSG__CMsgListManagerSave24_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerSave24_clbk RACE_BOSS_MSG__CMsgListManagerSave24_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerSave26_ptr RACE_BOSS_MSG__CMsgListManagerSave26_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerSave26_clbk RACE_BOSS_MSG__CMsgListManagerSave26_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgListManagerSend28_ptr RACE_BOSS_MSG__CMsgListManagerSend28_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerSend28_clbk RACE_BOSS_MSG__CMsgListManagerSend28_user(nullptr);
            
            
            Info::RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_ptr RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_clbk RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_user(nullptr);
            
            
            void RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_user(_this, RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_next);
            };
            int RACE_BOSS_MSG__CMsgListManagerCancel4_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace, unsigned int dwMsgID, struct RACE_BOSS_MSG::CMsg** pkMsg)
            {
               return RACE_BOSS_MSG__CMsgListManagerCancel4_user(_this, ucRace, dwMsgID, pkMsg, RACE_BOSS_MSG__CMsgListManagerCancel4_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerCleanUp6_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               RACE_BOSS_MSG__CMsgListManagerCleanUp6_user(_this, RACE_BOSS_MSG__CMsgListManagerCleanUp6_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
            {
               RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_user(_this, ucRace, pkMsg, RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_next);
            };
            char RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace)
            {
               return RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_user(_this, ucRace, RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_next);
            };
            struct RACE_BOSS_MSG::CMsg* RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char* ucRace)
            {
               return RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_user(_this, ucRace, RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_next);
            };
            bool RACE_BOSS_MSG__CMsgListManagerInit14_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               return RACE_BOSS_MSG__CMsgListManagerInit14_user(_this, RACE_BOSS_MSG__CMsgListManagerInit14_next);
            };
            bool RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               return RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_user(_this, RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_next);
            };
            bool RACE_BOSS_MSG__CMsgListManagerLoad18_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, unsigned int dwCurTime)
            {
               return RACE_BOSS_MSG__CMsgListManagerLoad18_user(_this, dwCurTime, RACE_BOSS_MSG__CMsgListManagerLoad18_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerRefresh20_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               RACE_BOSS_MSG__CMsgListManagerRefresh20_user(_this, RACE_BOSS_MSG__CMsgListManagerRefresh20_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerRelease22_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace, struct RACE_BOSS_MSG::CMsg* pkMsg)
            {
               RACE_BOSS_MSG__CMsgListManagerRelease22_user(_this, ucRace, pkMsg, RACE_BOSS_MSG__CMsgListManagerRelease22_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerSave24_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace)
            {
               RACE_BOSS_MSG__CMsgListManagerSave24_user(_this, ucRace, RACE_BOSS_MSG__CMsgListManagerSave24_next);
            };
            void RACE_BOSS_MSG__CMsgListManagerSave26_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               RACE_BOSS_MSG__CMsgListManagerSave26_user(_this, RACE_BOSS_MSG__CMsgListManagerSave26_next);
            };
            int RACE_BOSS_MSG__CMsgListManagerSend28_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this, char ucRace, unsigned int dwSerial, char* pwszName, char* pwszMsg, struct RACE_BOSS_MSG::CMsg** pkSend, unsigned int dbWebSendDBID)
            {
               return RACE_BOSS_MSG__CMsgListManagerSend28_user(_this, ucRace, dwSerial, pwszName, pwszMsg, pkSend, dbWebSendDBID, RACE_BOSS_MSG__CMsgListManagerSend28_next);
            };
            
            void RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_wrapper(struct RACE_BOSS_MSG::CMsgListManager* _this)
            {
               RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_user(_this, RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_next);
            };
            
            ::std::array<hook_record, 15> CMsgListManager_functions = 
            {
                _hook_record {
                    (LPVOID)0x14029f880L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerctor_CMsgListManager2_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::ctor_CMsgListManager)
                },
                _hook_record {
                    (LPVOID)0x14029fab0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCancel4_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCancel4_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerCancel4_wrapper),
                    (LPVOID)cast_pointer_function((int(RACE_BOSS_MSG::CMsgListManager::*)(char, unsigned int, struct RACE_BOSS_MSG::CMsg**))&RACE_BOSS_MSG::CMsgListManager::Cancel)
                },
                _hook_record {
                    (LPVOID)0x1402a0190L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCleanUp6_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCleanUp6_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerCleanUp6_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::CleanUp)
                },
                _hook_record {
                    (LPVOID)0x14029fcc0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerCleanUpCancel8_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)(char, struct RACE_BOSS_MSG::CMsg*))&RACE_BOSS_MSG::CMsgListManager::CleanUpCancel)
                },
                _hook_record {
                    (LPVOID)0x14029fb30L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerGetRemainCnt10_wrapper),
                    (LPVOID)cast_pointer_function((char(RACE_BOSS_MSG::CMsgListManager::*)(char))&RACE_BOSS_MSG::CMsgListManager::GetRemainCnt)
                },
                _hook_record {
                    (LPVOID)0x14029fba0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerGetSendMsg12_wrapper),
                    (LPVOID)cast_pointer_function((struct RACE_BOSS_MSG::CMsg*(RACE_BOSS_MSG::CMsgListManager::*)(char*))&RACE_BOSS_MSG::CMsgListManager::GetSendMsg)
                },
                _hook_record {
                    (LPVOID)0x1402a0090L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerInit14_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerInit14_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerInit14_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::Init)
                },
                _hook_record {
                    (LPVOID)0x14029ff50L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerIsHaveBeenSave16_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::IsHaveBeenSave)
                },
                _hook_record {
                    (LPVOID)0x14029fec0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerLoad18_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerLoad18_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerLoad18_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsgListManager::*)(unsigned int))&RACE_BOSS_MSG::CMsgListManager::Load)
                },
                _hook_record {
                    (LPVOID)0x1402a0020L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerRefresh20_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerRefresh20_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerRefresh20_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::Refresh)
                },
                _hook_record {
                    (LPVOID)0x14029fc50L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerRelease22_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerRelease22_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerRelease22_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)(char, struct RACE_BOSS_MSG::CMsg*))&RACE_BOSS_MSG::CMsgListManager::Release)
                },
                _hook_record {
                    (LPVOID)0x14029fe30L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSave24_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSave24_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerSave24_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)(char))&RACE_BOSS_MSG::CMsgListManager::Save)
                },
                _hook_record {
                    (LPVOID)0x14029fd80L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSave26_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSave26_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerSave26_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::Save)
                },
                _hook_record {
                    (LPVOID)0x14029f930L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSend28_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerSend28_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerSend28_wrapper),
                    (LPVOID)cast_pointer_function((int(RACE_BOSS_MSG::CMsgListManager::*)(char, unsigned int, char*, char*, struct RACE_BOSS_MSG::CMsg**, unsigned int))&RACE_BOSS_MSG::CMsgListManager::Send)
                },
                _hook_record {
                    (LPVOID)0x14029f8f0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgListManagerdtor_CMsgListManager30_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsgListManager::*)())&RACE_BOSS_MSG::CMsgListManager::dtor_CMsgListManager)
                },
            };
        }; // end namespace Detail
    }; // end namespace RACE_BOSS_MSG
END_ATF_NAMESPACE
