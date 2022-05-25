cmake_minimum_required(VERSION 3.5)

project(%{ProjectName} VERSION %{VersionMajor}.%{VersionMinor}.%{VersionPatch}.%{VersionTweak})

set(CMAKE_CXX_STANDARD %{standard})
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_EXPORT_COMPIPLE_COMMANDS ON)

if(QT_QMAKE_EXECUTABLE)
    message("${QT_QMAKE_EXECUTABLE}")
endif()

add_subdirectory(${CMAKE_PROJECT_NAME})
add_subdirectory(tests_%{ProjectName})
