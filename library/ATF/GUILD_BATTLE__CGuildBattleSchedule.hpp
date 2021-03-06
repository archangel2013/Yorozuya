// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CTime.hpp>
#include <ATL__CTimeSpan.hpp>
#include <GUILD_BATTLE__CGuildBattleStateList.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CGuildBattleSchedule
        {
            enum GS_STATE
            {
                GS_NONE = 0x0,
                GS_WAIT = 0x1,
                GS_PROC = 0x2,
                GS_DONE = 0x3,
                GS_MAX = 0x4,
            };
            unsigned int m_dwScheduleID;
            GS_STATE m_eState;
            ATL::CTime m_kNextStartTime;
            ATL::CTime m_kBattleStartTime;
            ATL::CTimeSpan m_kBattleTime;
            CGuildBattleStateList *m_pkStateList;
        public:
            CGuildBattleSchedule(unsigned int dwScheduleID);
            void ctor_CGuildBattleSchedule(unsigned int dwScheduleID);
            int Check();
            void Clear();
            bool ClearDB();
            struct ATL::CTimeSpan* GetBattleTime(struct ATL::CTimeSpan* result);
            int GetBattleTurm();
            bool GetLeftTime(char* byHour, char* byMin, char* bySec);
            int64_t GetRealStartTime();
            unsigned int GetSID();
            int GetState();
            struct ATL::CTime* GetTime(struct ATL::CTime* result);
            bool IsDone();
            bool IsEmpty();
            bool IsProc();
            bool IsWait();
            bool Load(bool bToday, unsigned int dwScheduleID, char ucState, int64_t tTime, uint16_t wTumeMin);
            int Process();
            char Set(unsigned int dwStartTimeInx, unsigned int dwElapseTimeCnt);
            void SetProcState();
            void SetStateList(struct CGuildBattleStateList* pkStateList);
            ~CGuildBattleSchedule();
            void dtor_CGuildBattleSchedule();
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
