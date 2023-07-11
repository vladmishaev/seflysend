import QtQuick 2.15
import QtQuick.Layouts 1.3


import "Input"

Item{
    id:_pageSignIn

    ColumnLayout{
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.left: parent.left
        spacing: 50


        Input{
            text_input.text: "Enter your login"
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Input{
            text_input.text: "Enter your password"
            input.echoMode: TextInput.Password
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }
    }



}


