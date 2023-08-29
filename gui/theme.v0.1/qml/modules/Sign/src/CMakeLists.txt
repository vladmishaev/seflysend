qt_add_library(LinkerModSign STATIC
    linkCppQmlModSign.cpp
    linkCppQmlModSign.h

    interfaceSign/interfaceSign.cpp
    interfaceSign/interfaceSign.h

    submitSignIn/submitSignIn.cpp
    submitSignIn/submitSignIn.h

    submitSignUp/submitSignUp.cpp
    submitSignUp/submitSignUp.h
)

target_link_libraries(LinkerModSign PRIVATE Qt6::Quick)
target_include_directories(LinkerModSign INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

