import QtQuick 2.15
import QtQuick.Layouts 1.3

import Components

Item{
    id: _rootSignUp
    signal haveAccounClick();

    ColumnLayout{
        anchors.verticalCenter: parent.verticalCenter
        anchors.right: parent.right
        anchors.left: parent.left
        spacing: 30

        Text{
            text: "Sign up"
            font.pointSize: 30
            Layout.alignment: Qt.AlignCenter
            Layout.bottomMargin: 20
        }

        Input{
            label: "Enter your mail"
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Input{
            label: "Enter your login"
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Input{
            label: "Enter your password"
            input.echoMode: TextInput.Password
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            Layout.leftMargin: 30
            Layout.rightMargin: 30
        }

        Text{
            text: "I already have an account"
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
                onClicked:{
                    _rootSignUp.haveAccounClick();

                }
            }

        }

        NextButton{
            Layout.minimumWidth: 150
            Layout.minimumHeight: 50
            Layout.alignment: Qt.AlignRight
            Layout.rightMargin: 30

        }

    }



}
