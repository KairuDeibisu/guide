cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(guide LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(wxWidgets_ROOT_DIR ${PROJECT_SOURCE_DIR}/vendor/wxwidgets)
set(wxWidgets_LIB_DIR ${PROJECT_SOURCE_DIR}/vendor/wxwidgets/lib/vc_x64_lib)
set(wxWidgets_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/vendor/wxwidgets/include)
set(wxWidgets_CONFIGURATION msw)

add_subdirectory(vendor)
add_subdirectory(tests)
add_subdirectory(src)
