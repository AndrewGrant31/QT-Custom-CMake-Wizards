%{Cpp:LicenseTemplate}\
#include "%{JS: Util.relativeFilePath('%{Path}/%{pchHeader}', '%{Path}' + '/' + Util.path('%{pchSource}'))}"

// DO NOT WRITE ANYTHING IN THIS FILE

// IT IS HERE SIMPLY TO KEEP THINGS NEAT AND TIDY