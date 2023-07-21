import QtQuick 2.15



Rectangle{
    color: "#D9D3D3"

    Text{
        text: "Next"
        anchors.centerIn: parent
        font.pointSize: 15

    }

    MouseArea{
        anchors.fill: parent
        cursorShape: Qt.PointingHandCursor
    }

}

