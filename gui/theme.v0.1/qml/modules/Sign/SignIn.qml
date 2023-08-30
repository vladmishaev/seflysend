import QtQuick 2.15
import QtQuick.Layouts 1.3

//Custem
import Components
import SubmitSignIn

Item{

    id: _rootSignIn
    signal goToRegister();

    ColumnLayout{
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.left: parent.left
        spacing: 30

        Text{
            text: "Sign in"
            font.pointSize: 30
            Layout.alignment: Qt.AlignCenter
            Layout.bottomMargin: 20
        }

        Input{
            id: _loginInput
            label: "Enter your login"
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Input{
            id: _passwordInput
            label: "Enter your password"
            input.echoMode: TextInput.Password
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Text{
            text: "Register"
            font.pointSize: 13
            Layout.alignment: Qt.AlignRight
            Layout.rightMargin: 30
            color: "black"

            MouseArea{
                anchors.fill: parent
                cursorShape: Qt.PointingHandCursor
                hoverEnabled: true
                onEntered:{
                    parent.color = "blue";
                }
                onExited:{
                    parent.color = "black";
                }
                onClicked: {
                    _rootSignIn.goToRegister();
                }
            }

        }

        NextButton{
            Layout.minimumWidth: 150
            Layout.minimumHeight: 50
            Layout.alignment: Qt.AlignRight
            Layout.rightMargin: 30
            MouseArea{
                anchors.fill: parent
                cursorShape: Qt.PointingHandCursor
                onClicked: {
                }
            }

        }

    }



}


