%{Cpp:LicenseTemplate}\
#pragma once

@if '%{UsePCH}'
//#include "../%{pchDirectoryName}/%{pch}"
#include "%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@if '%{cstdlib}'
#include <cstdlib>
@endif
@endif

namespace RunApp
{
    class Run
    {
        public:
            Run() = default;
    };
}