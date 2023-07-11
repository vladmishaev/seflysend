import QtQuick 2.15


Rectangle{

    readonly property alias input: _inputEnt
    readonly property alias text_input: _textInput

    border.color: "gray"

    MouseArea{
        anchors.fill: parent
        onClicked: {
            input.focus = true;
        }
    }

    TextInput{
        id: _inputEnt
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 50
        font.pixelSize: 25

        onFocusChanged: {
            if(_inputEnt.focuse === true)
            {
                animFSToSmall.start();
            }
        }

        Text{
            id: _textInput
            anchors.left: parent.left
            font.pixelSize: 25
            anchors.verticalCenter: parent.verticalCenter

        }

        PropertyAnimation{
            id: animSizFonToSmall
            target: _textInput
            properties: "font.pixelSize"

        }
    }
}
