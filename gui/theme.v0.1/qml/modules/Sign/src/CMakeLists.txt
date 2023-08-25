qt_add_library(LinkerModSign STATIC
    linkCppQmlModSign.cpp
    interfaceSign/interfaceSign.cpp
    submitSignIn/submitSignIn.cpp
    submitSignUp/submitSignUp.cpp
)

target_link_libraries(LinkerModSign PRIVATE Qt6::Quick)
target_include_directories(LinkerModSign INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

