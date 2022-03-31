#pragma once

#include "gtest/gtest.h"
@if '%{UsePCH}'
#include "../%{pchPath}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif
#include "../%{ProjectName}/%{declarationDir}/appDetails/%{filename}"


class %{Class}_TEST : public ::testing::Test 
{
    private:

    public:
        std::unique_ptr<%{namespaceId}::%{Class}> uptr_%{Class}{std::make_unique<%{namespaceId}::%{CN}>()};
};

TEST_F(%{Class}_TEST, testName)
{
    // test to run
}