// Copyright (c) 2015-2016 Vittorio Romeo
// License: Academic Free License ("AFL") v. 3.0
// AFL License page: http://opensource.org/licenses/AFL-3.0
// http://vittorioromeo.info | vittorio.romeo@outlook.com

#pragma once

#include "./base.hpp"

ECST_CONTEXT_SYSTEM_NAMESPACE
{
    namespace impl
    {
        template <typename TSettings, typename TSystemSignature>
        auto& instance_base<TSettings, TSystemSignature>::system() noexcept
        {
            return vrmc::to_base<system_type>(*this);
        }

        template <typename TSettings, typename TSystemSignature>
        const auto& instance_base<TSettings, TSystemSignature>::system() const
            noexcept
        {
            return vrmc::to_base<system_type>(*this);
        }
    }
}
ECST_CONTEXT_SYSTEM_NAMESPACE_END