// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std___Outit_with_base.hpp>
#include <std__basic_streambuf.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  ostreambuf_iterator<char,char_traits<char> > : _Outit_with_base<_Iterator_base>
        {
            bool _Failed;
            basic_streambuf<char,char_traits<char> > *_Strbuf;
        };
    }; // end namespace std
END_ATF_NAMESPACE
#include <std___Outit_with_base.hpp>
#include <std__basic_streambuf.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  ostreambuf_iterator<wchar_t,char_traits<wchar_t> > : _Outit_with_base<_Iterator_base>
        {
            bool _Failed;
            basic_streambuf<wchar_t,char_traits<wchar_t> > *_Strbuf;
        };
    }; // end namespace std
END_ATF_NAMESPACE
