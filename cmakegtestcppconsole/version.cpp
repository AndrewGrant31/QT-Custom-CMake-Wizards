%{Cpp:LicenseTemplate}\
#include "../../%{versionhdr_location}"

using namespace AppDetails;

std::string Version::GetVersion_Full()
{
    std::string dot{"."};
    std::string temp{v_major_};
    temp.append(dot);
    temp.append(v_minor_);
    temp.append(dot);
    temp.append(v_patch_);
    temp.append(dot);
    temp.append(v_tweak_);

    return temp;
}