%{Cpp:LicenseTemplate}\
#pragma once

@if '%{UsePCH}'
#include "../../%{pchDirectoryName}/%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif

#include "../../config/config.h"

namespace AppDetails
{
    class Version
    {
        private:
            std::string v_major_{std::to_string(%{ProjectName}_VERSION_MAJOR)};
            std::string v_minor_{std::to_string(%{ProjectName}_VERSION_MINOR)};
            std::string v_patch_{std::to_string(%{ProjectName}_VERSION_PATCH)};
            std::string v_tweak_{std::to_string(%{ProjectName}_VERSION_TWEAK)};
        public:
            std::string GetVersion_Full();
    };
}