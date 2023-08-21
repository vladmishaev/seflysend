cmake_minimum_required(VERSION 3.16)

project(theme.v0.1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTORCC ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Quick)

qt_add_executable(appscr
    main.cpp
    qml.qrc
)


qt_add_qml_module(appscr
    URI main
    VERSION 1.0
    QML_FILES qml/Main.qml
)


set_target_properties(appscr PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

#Liners QML&Cpp
add_subdirectory(qml/modules/src/LinkQmlCppAllMod)
target_link_libraries(appscr PRIVATE
    LinkQmlCppAllMod
)
#end




add_subdirectory(qml/components)
add_subdirectory(qml/modules/Sign)


target_link_libraries(appscr
    PRIVATE Qt6::Quick Qt6::Gui
)

target_link_libraries(appscr
    PRIVATE  ComponentsLibplugin SignLibplugin)

install(TARGETS appscr
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

