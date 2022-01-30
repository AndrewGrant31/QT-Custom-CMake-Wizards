%{Cpp:LicenseTemplate}\
#pragma once

@if '%{UsePCH}'
#include "../../pch/%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif

namespace AppDetails
{
    class AppName
    {
        private:
            static const std::string appname_;

        public:
            AppName() = default;
            const std::string GetAppName();

    };
}