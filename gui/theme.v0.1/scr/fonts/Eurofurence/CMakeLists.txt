cmake_minimum_required(VERSION 3.16)

project(EurofurenceFontModule)

set(CMAKE_PREFIX_PATH "/home/vlad/Qt" ${CMAKE_PREFIX_PATH})

set(Qt6_DIR "/home/vlad/Qt/6.3.2/gcc_64/lib/cmake/Qt6")

find_package(Qt6 COMPONENTS Quick Qml REQUIRED)



qt_add_qml_module(EurofurenceFontModule
    URI EurofurenceFont
    VERSION 1.0
    QML_FILES
        Eurofurence.qml
    SOURCES
        fonts/italicBold.ttf
        fonts/italicExtraBold.ttf
        fonts/italicLight.ttf
        fonts/regularBold.ttf
        fonts/regularExtraBold.ttf
        fonts/regularLight.ttf
        
    
)

