#pragma once

#include "gtest/gtest.h"
@if '%{UsePCH}'

#include "%{pchTestPath}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif
#include "%{fileBeingTested}"


class %{testClass} : public ::testing::Test 
{
    private:

    public:
        std::unique_ptr<%{namespaceId}::%{Class}> uptr_%{Class}{std::make_unique<%{namespaceId}::%{CN}>()};
};

TEST_F(%{testClass}, Requires_A_Test)
{
    // test to run
}