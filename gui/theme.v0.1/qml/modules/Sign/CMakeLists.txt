qt_add_library(SignLib STATIC)

set_target_properties(SignLib PROPERTIES AUTOMOC ON)
target_link_libraries(SignLib PRIVATE Qt6::Quick)

list(APPEND MODULE_QML_FILES
    SignIn.qml
    SignUp.qml
)

qt_add_qml_module(SignLib
    URI Sign
    VERSION 1.0
    RESOURCE_PREFIX /selfysend.com/imports
    QML_FILES
        ${MODULE_QML_FILES}
)

