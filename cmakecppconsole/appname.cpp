%{Cpp:LicenseTemplate}\
#include "../../%{appnamehdr}"

using namespace AppDetails;

const std::string AppName::appname_{"%{ProjectName}"};

const std::string AppName::GetAppName()
{
    return appname_;
}