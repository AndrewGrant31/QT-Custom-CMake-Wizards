%{Cpp:LicenseTemplate}\
#pragma once

#include "../config/%{configFile}"

#include <iostream>
#include <string>
#include <memory>
@if '%{cstdlib}'
#include <cstdlib>
@endif