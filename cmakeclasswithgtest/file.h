%{Cpp:LicenseTemplate}\
@if '%{Cpp:PragmaOnce}'
#pragma once
@else
#ifndef %{GUARD}
#define %{GUARD}
@endif
@if '%{UsePCH}'
#include "%{pchPath}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif

namespace %{namespaceId}
{
    class %{CN}
    {
    private:

    public:
        %{CN} ( ) = default;
        
    };
}
%{JS: Cpp.closeNamespaces('%{Class}')}
@if ! '%{Cpp:PragmaOnce}'
#endif // %{GUARD}
@endif
