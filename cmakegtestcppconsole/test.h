#pragma once

#include "gtest/gtest.h"
@if '%{UsePCH}'
#include "%{pch}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif
#include "appDetails/%{filename}"


class %{CNTest} : public ::testing::Test 
{
    private:

    public:
        std::unique_ptr<%{namespaceId}::%{CN}> uptr_%{CN}{std::make_unique<%{namespaceId}::%{CN}>()};
};

TEST_F(%{CNTest}, %{testname})
{
    %{test}
    // test to run
}