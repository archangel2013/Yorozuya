// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$BC236CFBD570C18489EB46681F52D83D.hpp>
#include <lconv.hpp>
#include <tagLC_ID.hpp>


START_ATF_NAMESPACE
    struct threadlocaleinfostruct
    {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned int lc_handle[6];
        tagLC_ID lc_id[6];
        $BC236CFBD570C18489EB46681F52D83D lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int *lconv_intl_refcount;
        int *lconv_num_refcount;
        int *lconv_mon_refcount;
        lconv *lconv;
        int *ctype1_refcount;
        unsigned __int16 *ctype1;
        const unsigned __int16 *pctype;
        const char *pclmap;
        const char *pcumap;
        struct __lc_time_data *lc_time_curr;
    };
END_ATF_NAMESPACE
