#include "stdafx.h"

#include "LootExchange.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <bitset>
#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CLootExchange::m_bActivated = false;

        void CLootExchange::load()
        {
            enable_hook(&ATF::CPlayer::pc_TakeGroundingItem, &CLootExchange::pc_TakeGroundingItem);
        }

        void CLootExchange::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CLootExchange::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addons.loot_exchange";
            return name;
        }

        void CLootExchange::configure(
            const rapidjson::Value& nodeConfig)
        {
            UNREFERENCED_PARAMETER(nodeConfig);
            m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
        }

        void WINAPIV CLootExchange::pc_TakeGroundingItem(
            ATF::CPlayer* pObj,
            ATF::CItemBox* pBox,
            uint16_t wAddSerial,
            ATF::Info::CPlayerpc_TakeGroundingItem1947_ptr next)
        {
            bool bApplyModule = false;

            do
            {
                if (!CLootExchange::m_bActivated)
                {
                    break;
                }

                if (!pBox->m_bLive)
                {
                    break;
                }
                
                if (!pBox->IsTakeRight(pObj))
                {
                    break;
                }

                if (ATF::Global::Get3DSqrt(pBox->m_fCurPos, pObj->m_fCurPos) > 100.f)
                {
                    break;
                }

                if (pBox->m_Item.m_byTableCode >= _countof(ATF::Global::g_MainThread->m_tblItemData))
                {
                    break;
                }

                auto& ItemRecords = ATF::Global::g_MainThread->m_tblItemData[pBox->m_Item.m_byTableCode];
                auto pRecord = ItemRecords.GetRecord(pBox->m_Item.m_wItemIndex);
                if (pRecord == nullptr)
                {
                    break;
                }

                ::std::bitset<32> bMoneyType(GetMoneyType(pRecord, pBox->m_Item.m_byTableCode));
                if (!bMoneyType.test(5))
                {
                    break;
                }

                bMoneyType.set(5, false);
                uint32_t nMoneyType = bMoneyType.to_ulong();
                int nMoneyValue = GetMoneyValue(pRecord, pBox->m_Item.m_byTableCode, nMoneyType);
                if (nMoneyValue <= 0)
                {
                    break;
                }

                nMoneyValue *= pBox->m_Item.m_dwDur ? pBox->m_Item.m_dwDur : 1;
                if (nMoneyValue <= 0)
                {
                    break;
                }

                AddMoney(pObj, nMoneyType, nMoneyValue);

                bApplyModule = true;
            } while (false);

            if (!bApplyModule)
                return next(pObj, pBox, wAddSerial);
        }

        int CLootExchange::GetMoneyType(
            ATF::_base_fld * pRec,
            char byTableCode)
        {
            // todo
            return 0;
        }

        int CLootExchange::GetMoneyValue(
            ATF::_base_fld * pRec,
            char byTableCode,
            uint32_t nMoneyType)
        {
            // todo
            return 0;
        }

        void CLootExchange::AddMoney(
            ATF::CPlayer * pObj,
            uint32_t nMoneyType,
            int nMoneyValue)
        {
            // todo
        }
    }
}