%{Cpp:LicenseTemplate}\
#pragma once

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
    class AppName
    {
        private:
            static const std::string appname_;

        public:
            AppName() = default;
            const std::string GetAppName();

    };
}