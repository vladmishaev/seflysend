
set(NAME_OF_LIBRARY "LinkQmlCppAllMod")

qt_add_library(LinkQmlCppAllMod STATIC
    linkerAllMod.cpp
)


add_subdirectory(../../Sign/src/LinkCppQml build)

target_link_libraries(LinkQmlCppAllMod PRIVATE LinkerModSign)
target_include_directories(LinkQmlCppAllMod INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
