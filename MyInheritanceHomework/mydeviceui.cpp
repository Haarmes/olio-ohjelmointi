#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI() {
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    while(true)
    {
    string menuChoice;
    cout << "DEVICE MENU" << endl;
    cout << "===========" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show Devices Information" << endl;
    cout << "5: Finish" << endl;
    cout << "" << endl;
    cout << "Choose: ";
    cin >> menuChoice;
    cout << endl;
    if(menuChoice == "1"){
        uiSetMouseInformation();
    }
    else if(menuChoice == "2"){
        uiSetTouchPadInformation();
    }
    else if(menuChoice == "3"){
        uiSetDisplayInformation();
    }
    else if(menuChoice == "4"){
        uiShowDeviceInformation();
    }
    else if(menuChoice == "5"){
        break;
    }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl;
    cout << "=====================" << endl;
    cout << "Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    objectDeviceMouse->setPrimaryButton();
    cout << endl;
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCHPAD INFORMATION" << endl;
    cout << "========================" << endl;
    cout << "Set Touch Pad ID: ";
    objectDeviceTouchPad->setDeviceID();
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl;
    cout << "=======================" << endl;
    cout << "Set Display ID: ";
    objectDeviceDisplay->setDeviceID();
    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "DEVICE INFORMATION" << endl;
    cout << "==================" << endl;
    cout << "Mouse Device ID: " << objectDeviceMouse->getDeviceID() << endl;
    cout << "Mouse Primary Button: " << objectDeviceMouse->getPrimaryButton() << endl;
    cout << "Touch Pad Device ID: " << objectDeviceTouchPad->getDeviceID() << endl;
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << "Display Device ID: " << objectDeviceDisplay->getDeviceID() << endl;
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl << endl;
}
