import QtQuick
import QtQuick.Window
import QtQuick.Controls 2.5
import Sign



Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("selfySend")

    StackView {
        id: _rootStackView
        anchors.fill: parent
        initialItem: _signUpPage
        focus: true
    }

    SignIn{
        id: _signInPage
        visible: false
        onGoToRegister:{
            _rootStackView.pop()
        }
    }

    SignUp{
        id: _signUpPage
        visible: false
        onHaveAccounClick:{
            _rootStackView.push(_signInPage)
        }
    }





}
