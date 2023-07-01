import QtQuick 2.15
import QtQuick.Layouts 1.3


Item{
    id:_pageSignIn

    ColumnLayout{
        anchors.fill: parent

        Rectangle{
            id: _inputNiknameIn
            Layout.fillWidth: true
            Layout.minimumHeight: 50
            border.color: "gray"

            TextInput{
                anchors.fill: parent
                focus: true

                font.pixelSize: 25

                Text{
                    text: "Enter your password"
                    anchors.left: parent.left
                    font.pixelSize: 25
                    anchors.verticalCenter: parent.verticalCenter
                    anchors.leftMargin: 60
                }
            }
        }

    }
}
