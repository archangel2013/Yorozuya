// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CNormalGuildBattleState.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattleStateDivide : CNormalGuildBattleState
        {
        public:
            CNormalGuildBattleStateDivide();
            void ctor_CNormalGuildBattleStateDivide();
            int Fin(struct CNormalGuildBattle* pkBattle);
            struct ATL::CTimeSpan* GetTerm(struct ATL::CTimeSpan* result);
            ~CNormalGuildBattleStateDivide();
            void dtor_CNormalGuildBattleStateDivide();
        };    
        static_assert(ATF::checkSize<GUILD_BATTLE::CNormalGuildBattleStateDivide, 8>(), "GUILD_BATTLE::CNormalGuildBattleStateDivide");
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
