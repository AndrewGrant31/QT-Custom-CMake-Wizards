%{Cpp:LicenseTemplate}\
#include "%{shortenedAppNameHdr}"
#include "%{shortenedVersionHdr}"
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

@if '%{CPP11EntryPoint}'
%{CPP11EntryPoint}
@else 
%{entryPoint}
@endif 
{
    auto appName{std::%{CPP11Unique_Ptr}<AppDetails::AppName>()};
    std::cout << appName->GetAppName() << std::endl;

    std::cout << AppDetails::Version::GetFullVersion() << std::endl;
    
    @if '%{CPP11ExitPoint}'
    %{CPP11ExitPoint}
    @else
    %{exitPoint}
    @endif
}
