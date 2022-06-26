%{Cpp:LicenseTemplate}\
#pragma once

#include "../../../config/config.h"
@if '%{UsePCH}'
#include "%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@if '%{cstdlib}'
#include <cstdlib>
@endif
@endif

namespace AppDetails
{
    class Version
    {
        private:
            const static std::string verMajor;
            const static std::string verMinor;
            const static std::string verTweak;
            const static std::string verPatch;
        public:
            static std::string GetMajorVersion();
            static std::string GetMinorVersion();
            static std::string GetTweakVersion();
            static std::string GetPatchVersion();

            static std::string GetFullVersion();
            

    };
}