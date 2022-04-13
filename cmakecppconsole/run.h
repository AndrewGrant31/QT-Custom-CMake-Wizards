%{Cpp:LicenseTemplate}\
#pragma once

@if '%{UsePCH}'
#include "../pch/%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif

namespace RunApp
{
    class Run
    {
        public:
            Run() = default;
    };
}