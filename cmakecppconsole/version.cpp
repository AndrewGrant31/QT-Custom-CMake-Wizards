%{Cpp:LicenseTemplate}\
#include "%{shortenedVersionHdr}"

using namespace AppDetails;

const std::string AppDetails::Version::verMajor{std::to_string(%{ProjectName}_VERSION_MAJOR)};
const std::string AppDetails::Version::verMinor{std::to_string(%{ProjectName}_VERSION_MINOR)};
const std::string AppDetails::Version::verTweak{std::to_string(%{ProjectName}_VERSION_TWEAK)};
const std::string AppDetails::Version::verPatch{std::to_string(%{ProjectName}_VERSION_PATCH)};

std::string AppDetails::Version::GetMajorVersion()
{
    return verMajor;
}

std::string AppDetails::Version::GetMinorVersion()
{
    return verMinor;
}

std::string AppDetails::Version::GetTweakVersion()
{
    return verTweak;
}

std::string AppDetails::Version::GetPatchVersion()
{
    return verPatch;
}

std::string AppDetails::Version::GetFullVersion()
{
    std::string dot{"."};
    std::string temp{verMajor};
    return temp.append(dot).append(verMinor).append(dot).append(verTweak).append(dot).append(verPatch);    
}