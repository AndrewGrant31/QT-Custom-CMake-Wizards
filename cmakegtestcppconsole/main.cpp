%{Cpp:LicenseTemplate}\
#include "%{appnamehdr_location}"
@if '%{UsePCH}'
#include "%{pchDirectoryName}/%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif

@if '%{CPP11EntryPoint}'
%{CPP11EntryPoint}
@else 
%{entryPoint}
@endif 
{
    auto appName{std::%{CPP11Unique_Ptr}<AppDetails::AppName>()};
    std::cout << appName->GetAppName() << std::endl;
    
    @if '%{CPP11ExitPoint}'
    %{CPP11ExitPoint}
    @else
    %{exitPoint}
    @endif
}
