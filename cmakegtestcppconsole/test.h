#pragma once

#include "gtest/gtest.h"
@if '%{UsePCH}'
#include "../%{pchHeader}"
@else 
#include <iostream>
#include <string>
#include <memory>
@endif
#include "../%{ProjectName}/%{DeclarationDirectory}/appDetails/%{filename}"


class %{CN}_TEST : public ::testing::Test 
{
    private:

    public:
        std::unique_ptr<%{namespaceId}::%{CN}> uptr_%{CN}{std::make_unique<%{namespaceId}::%{CN}>()};
};

TEST_F(%{CN}_TEST, Requires_a_test)
{
    // test to run
}