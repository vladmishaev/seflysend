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
            if(input.focus === true)
            {
                _hideText.start();

            }else if(input.text === "")
            {
                _showText.start();
            }
        }

        Text{
            id: _textInput
            x:0
            y:0
            font.pixelSize: 25

        }

        SequentialAnimation{
            id: _hideText

            NumberAnimation {target: _textInput; properties: "y";
                to: -35; duration: 150}
            NumberAnimation {target: _textInput; properties: "font.pixelSize";
                to: 15; duration: 100}
            NumberAnimation {target: _textInput; properties: "x";
                to: -48; duration: 150}
        }

        SequentialAnimation{
            id: _showText

            NumberAnimation {target: _textInput; properties: "y";
                to: 0; duration: 100}
            NumberAnimation {target: _textInput; properties: "x";
                to: 0; duration: 100}
            NumberAnimation {target: _textInput; properties: "font.pixelSize";
                to: 25; duration: 100}
        }

    }
}
