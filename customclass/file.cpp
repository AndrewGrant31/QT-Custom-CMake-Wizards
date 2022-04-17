%{Cpp:LicenseTemplate}\
#include "%{JS: Util.relativeFilePath('%{DeclarationPath}/%{HdrFileName}', '%{DefinitionPath}' + '/' + Util.path('%{SrcFileName}'))}"

using namespace %{namespaceId};

%{JS: Cpp.openNamespaces('%{Class}')}


%{JS: Cpp.closeNamespaces('%{Class}')}\
