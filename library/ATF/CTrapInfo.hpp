// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CTrap.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CTrapAttack2_ptr = void (WINAPIV*)(struct CTrap*, struct CCharacter*);
        using CTrapAttack2_clbk = void (WINAPIV*)(struct CTrap*, struct CCharacter*, CTrapAttack2_ptr);
        using CTrapAttackableHeight4_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapAttackableHeight4_clbk = int (WINAPIV*)(struct CTrap*, CTrapAttackableHeight4_ptr);
        
        using CTrapctor_CTrap6_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapctor_CTrap6_clbk = void (WINAPIV*)(struct CTrap*, CTrapctor_CTrap6_ptr);
        using CTrapCheckTranspar8_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapCheckTranspar8_clbk = void (WINAPIV*)(struct CTrap*, CTrapCheckTranspar8_ptr);
        using CTrapCreate10_ptr = bool (WINAPIV*)(struct CTrap*, struct _trap_create_setdata*);
        using CTrapCreate10_clbk = bool (WINAPIV*)(struct CTrap*, struct _trap_create_setdata*, CTrapCreate10_ptr);
        using CTrapDestroy12_ptr = bool (WINAPIV*)(struct CTrap*, char);
        using CTrapDestroy12_clbk = bool (WINAPIV*)(struct CTrap*, char, CTrapDestroy12_ptr);
        using CTrapGetAttackDP14_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetAttackDP14_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetAttackDP14_ptr);
        using CTrapGetAttackRange16_ptr = float (WINAPIV*)(struct CTrap*);
        using CTrapGetAttackRange16_clbk = float (WINAPIV*)(struct CTrap*, CTrapGetAttackRange16_ptr);
        using CTrapGetDefFC18_ptr = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int*);
        using CTrapGetDefFC18_clbk = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int*, CTrapGetDefFC18_ptr);
        using CTrapGetDefFacing20_ptr = float (WINAPIV*)(struct CTrap*, int);
        using CTrapGetDefFacing20_clbk = float (WINAPIV*)(struct CTrap*, int, CTrapGetDefFacing20_ptr);
        using CTrapGetDefGap22_ptr = float (WINAPIV*)(struct CTrap*, int);
        using CTrapGetDefGap22_clbk = float (WINAPIV*)(struct CTrap*, int, CTrapGetDefGap22_ptr);
        using CTrapGetDefSkill24_ptr = int (WINAPIV*)(struct CTrap*, bool);
        using CTrapGetDefSkill24_clbk = int (WINAPIV*)(struct CTrap*, bool, CTrapGetDefSkill24_ptr);
        using CTrapGetFireTol26_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetFireTol26_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetFireTol26_ptr);
        using CTrapGetGenAttackProb28_ptr = int (WINAPIV*)(struct CTrap*, struct CCharacter*, int, bool);
        using CTrapGetGenAttackProb28_clbk = int (WINAPIV*)(struct CTrap*, struct CCharacter*, int, bool, CTrapGetGenAttackProb28_ptr);
        using CTrapGetHP30_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetHP30_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetHP30_ptr);
        using CTrapGetLevel32_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetLevel32_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetLevel32_ptr);
        using CTrapGetMaxHP34_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetMaxHP34_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetMaxHP34_ptr);
        using CTrapGetNewSerial36_ptr = unsigned int (WINAPIV*)();
        using CTrapGetNewSerial36_clbk = unsigned int (WINAPIV*)(CTrapGetNewSerial36_ptr);
        using CTrapGetObjName38_ptr = char* (WINAPIV*)(struct CTrap*);
        using CTrapGetObjName38_clbk = char* (WINAPIV*)(struct CTrap*, CTrapGetObjName38_ptr);
        using CTrapGetObjRace40_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetObjRace40_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetObjRace40_ptr);
        using CTrapGetSoilTol42_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetSoilTol42_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetSoilTol42_ptr);
        using CTrapGetWaterTol44_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetWaterTol44_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetWaterTol44_ptr);
        using CTrapGetWeaponAdjust46_ptr = float (WINAPIV*)(struct CTrap*);
        using CTrapGetWeaponAdjust46_clbk = float (WINAPIV*)(struct CTrap*, CTrapGetWeaponAdjust46_ptr);
        using CTrapGetWeaponClass48_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetWeaponClass48_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetWeaponClass48_ptr);
        using CTrapGetWidth50_ptr = float (WINAPIV*)(struct CTrap*);
        using CTrapGetWidth50_clbk = float (WINAPIV*)(struct CTrap*, CTrapGetWidth50_ptr);
        using CTrapGetWindTol52_ptr = int (WINAPIV*)(struct CTrap*);
        using CTrapGetWindTol52_clbk = int (WINAPIV*)(struct CTrap*, CTrapGetWindTol52_ptr);
        using CTrapInit54_ptr = bool (WINAPIV*)(struct CTrap*, struct _object_id*);
        using CTrapInit54_clbk = bool (WINAPIV*)(struct CTrap*, struct _object_id*, CTrapInit54_ptr);
        using CTrapIsBeAttackedAble56_ptr = bool (WINAPIV*)(struct CTrap*, bool);
        using CTrapIsBeAttackedAble56_clbk = bool (WINAPIV*)(struct CTrap*, bool, CTrapIsBeAttackedAble56_ptr);
        using CTrapIsHaveEmpty58_ptr = bool (WINAPIV*)();
        using CTrapIsHaveEmpty58_clbk = bool (WINAPIV*)(CTrapIsHaveEmpty58_ptr);
        using CTrapIsInTown60_ptr = bool (WINAPIV*)(struct CTrap*);
        using CTrapIsInTown60_clbk = bool (WINAPIV*)(struct CTrap*, CTrapIsInTown60_ptr);
        using CTrapLoop62_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapLoop62_clbk = void (WINAPIV*)(struct CTrap*, CTrapLoop62_ptr);
        using CTrapMasterNetClose64_ptr = void (WINAPIV*)(struct CTrap*, long double);
        using CTrapMasterNetClose64_clbk = void (WINAPIV*)(struct CTrap*, long double, CTrapMasterNetClose64_ptr);
        using CTrapMasterReStart66_ptr = void (WINAPIV*)(struct CTrap*, struct CPlayer*);
        using CTrapMasterReStart66_clbk = void (WINAPIV*)(struct CTrap*, struct CPlayer*, CTrapMasterReStart66_ptr);
        using CTrapOutOfSec68_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapOutOfSec68_clbk = void (WINAPIV*)(struct CTrap*, CTrapOutOfSec68_ptr);
        using CTrapRecvKillMessage70_ptr = void (WINAPIV*)(struct CTrap*, struct CCharacter*);
        using CTrapRecvKillMessage70_clbk = void (WINAPIV*)(struct CTrap*, struct CCharacter*, CTrapRecvKillMessage70_ptr);
        using CTrapSearchNearEnemy72_ptr = struct CCharacter* (WINAPIV*)(struct CTrap*);
        using CTrapSearchNearEnemy72_clbk = struct CCharacter* (WINAPIV*)(struct CTrap*, CTrapSearchNearEnemy72_ptr);
        using CTrapSendMsg_AlterTranspar74_ptr = void (WINAPIV*)(struct CTrap*, bool);
        using CTrapSendMsg_AlterTranspar74_clbk = void (WINAPIV*)(struct CTrap*, bool, CTrapSendMsg_AlterTranspar74_ptr);
        using CTrapSendMsg_Attack76_ptr = void (WINAPIV*)(struct CTrap*, struct CAttack*);
        using CTrapSendMsg_Attack76_clbk = void (WINAPIV*)(struct CTrap*, struct CAttack*, CTrapSendMsg_Attack76_ptr);
        using CTrapSendMsg_Create78_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapSendMsg_Create78_clbk = void (WINAPIV*)(struct CTrap*, CTrapSendMsg_Create78_ptr);
        using CTrapSendMsg_Destroy80_ptr = void (WINAPIV*)(struct CTrap*, char);
        using CTrapSendMsg_Destroy80_clbk = void (WINAPIV*)(struct CTrap*, char, CTrapSendMsg_Destroy80_ptr);
        using CTrapSendMsg_FixPosition82_ptr = void (WINAPIV*)(struct CTrap*, int);
        using CTrapSendMsg_FixPosition82_clbk = void (WINAPIV*)(struct CTrap*, int, CTrapSendMsg_FixPosition82_ptr);
        using CTrapSendMsg_TrapCompleteInform84_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapSendMsg_TrapCompleteInform84_clbk = void (WINAPIV*)(struct CTrap*, CTrapSendMsg_TrapCompleteInform84_ptr);
        using CTrapSetDamage86_ptr = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        using CTrapSetDamage86_clbk = int (WINAPIV*)(struct CTrap*, int, struct CCharacter*, int, bool, int, unsigned int, bool, CTrapSetDamage86_ptr);
        
        using CTrapdtor_CTrap92_ptr = void (WINAPIV*)(struct CTrap*);
        using CTrapdtor_CTrap92_clbk = void (WINAPIV*)(struct CTrap*, CTrapdtor_CTrap92_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
