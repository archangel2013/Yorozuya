// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CandidateRegister.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CandidateRegisterctor_CandidateRegister2_ptr = void (WINAPIV*)(struct CandidateRegister*);
        using CandidateRegisterctor_CandidateRegister2_clbk = void (WINAPIV*)(struct CandidateRegister*, CandidateRegisterctor_CandidateRegister2_ptr);
        using CandidateRegisterDoit4_ptr = int (WINAPIV*)(struct CandidateRegister*, Cmd, struct CPlayer*, char*);
        using CandidateRegisterDoit4_clbk = int (WINAPIV*)(struct CandidateRegister*, Cmd, struct CPlayer*, char*, CandidateRegisterDoit4_ptr);
        using CandidateRegisterInitialize6_ptr = bool (WINAPIV*)(struct CandidateRegister*);
        using CandidateRegisterInitialize6_clbk = bool (WINAPIV*)(struct CandidateRegister*, CandidateRegisterInitialize6_ptr);
        using CandidateRegister_AddToPacket8_ptr = bool (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, unsigned int);
        using CandidateRegister_AddToPacket8_clbk = bool (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, unsigned int, CandidateRegister_AddToPacket8_ptr);
        using CandidateRegister_CheckPlayerInfo10_ptr = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*);
        using CandidateRegister_CheckPlayerInfo10_clbk = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, CandidateRegister_CheckPlayerInfo10_ptr);
        using CandidateRegister_InitCandidate12_ptr = void (WINAPIV*)(struct CandidateRegister*);
        using CandidateRegister_InitCandidate12_clbk = void (WINAPIV*)(struct CandidateRegister*, CandidateRegister_InitCandidate12_ptr);
        using CandidateRegister_Regist14_ptr = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, char*);
        using CandidateRegister_Regist14_clbk = int (WINAPIV*)(struct CandidateRegister*, struct CPlayer*, char*, CandidateRegister_Regist14_ptr);
        using CandidateRegister_SendList16_ptr = int (WINAPIV*)(struct CandidateRegister*, uint16_t, char);
        using CandidateRegister_SendList16_clbk = int (WINAPIV*)(struct CandidateRegister*, uint16_t, char, CandidateRegister_SendList16_ptr);
        using CandidateRegister_SortCandidacyByPvpPoint18_ptr = void (WINAPIV*)(struct CandidateRegister*, char);
        using CandidateRegister_SortCandidacyByPvpPoint18_clbk = void (WINAPIV*)(struct CandidateRegister*, char, CandidateRegister_SortCandidacyByPvpPoint18_ptr);
        using CandidateRegister_UpdatePacketWin20_ptr = void (WINAPIV*)(struct CandidateRegister*, char, char*, unsigned int);
        using CandidateRegister_UpdatePacketWin20_clbk = void (WINAPIV*)(struct CandidateRegister*, char, char*, unsigned int, CandidateRegister_UpdatePacketWin20_ptr);
        
        using CandidateRegisterdtor_CandidateRegister25_ptr = void (WINAPIV*)(struct CandidateRegister*);
        using CandidateRegisterdtor_CandidateRegister25_clbk = void (WINAPIV*)(struct CandidateRegister*, CandidateRegisterdtor_CandidateRegister25_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
