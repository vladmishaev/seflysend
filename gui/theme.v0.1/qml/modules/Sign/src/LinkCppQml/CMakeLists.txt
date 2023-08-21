qt_add_library(LinkerModSign STATIC
    linkerModSign.cpp
    ../SendInputData/main.cpp
)

target_link_libraries(LinkerModSign PRIVATE Qt6::Quick)
target_include_directories(LinkerModSign INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

