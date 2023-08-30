import QtQuick 2.15


Rectangle{
    readonly property alias value: _inputEnt.text
    property alias label: _textLabel.text
    property alias type: _inputEnt.echoMode


    border.color: "gray"

    MouseArea{
        anchors.fill: parent
        onClicked: {
            _inputEnt.focus = true;
        }
    }

    TextInput{
        id: _inputEnt
        anchors.verticalCenter: parent.verticalCenter
        anchors.left: parent.left
        anchors.leftMargin: 50
        font.pixelSize: 25
        focus: false

        onFocusChanged: {
            if(focus)
            {
                _hideText.start();

            }else if(text === "")
            {
                _showText.start();
            }
        }

        Text{
            id: _textLabel
            x:0
            y:0
            font.pixelSize: 25

        }

        SequentialAnimation{
            id: _hideText

            NumberAnimation {target: _textLabel; properties: "y";
                to: -35; duration: 150}
            NumberAnimation {target: _textLabel; properties: "font.pixelSize";
                to: 15; duration: 100}
            NumberAnimation {target: _textLabel; properties: "x";
                to: -48; duration: 150}
        }

        SequentialAnimation{
            id: _showText

            NumberAnimation {target: _textLabel; properties: "y";
                to: 0; duration: 100}
            NumberAnimation {target: _textLabel; properties: "x";
                to: 0; duration: 100}
            NumberAnimation {target: _textLabel; properties: "font.pixelSize";
                to: 25; duration: 100}
        }

    }
}
