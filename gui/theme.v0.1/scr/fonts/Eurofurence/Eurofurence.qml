import QtQuick 2.15
import EurofurenceFont
pragma Singleton

Item{

    readonly property string italicLight: italicLight.name
    readonly property string italicBold:  italicBold.name
    readonly property string italicExtraBold: italicExtraBold.name
    readonly property string regularLight: regularLight.name
    readonly property string regularBold: regularBold.name
    readonly property string regularExtraBold: regularExtraBold.name

    FontLoader{id: italicLight; source: "./fonts/italicLight.ttf" }
    FontLoader{id: italicBold; source: "./fonts/italicBold.ttf" }
    FontLoader{id: italicExtraBold; source: "./fonts/italicExtraBold.ttf" }
    FontLoader{id: regularLight; source: "./fonts/regularLight.ttf" }
    FontLoader{id: regularBold; source: "./fonts/regularBold.ttf" }
    FontLoader{id: regularExtraBold; source: "./fonts/regularExtraBold.ttf" }
}
