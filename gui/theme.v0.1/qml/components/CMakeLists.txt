qt_add_library(ComponentsLib STATIC)

set_target_properties(ComponentsLib PROPERTIES AUTOMOC ON)
target_link_libraries(ComponentsLib PRIVATE Qt6::Quick)

list(APPEND MODULE_QML_FILES
    Input/Input.qml
    NextButton/NextButton.qml
)

qt_add_qml_module(ComponentsLib
    URI Components
    VERSION 1.0
    RESOURCE_PREFIX /selfysend.com/imports
    QML_FILES
        ${MODULE_QML_FILES}
)
