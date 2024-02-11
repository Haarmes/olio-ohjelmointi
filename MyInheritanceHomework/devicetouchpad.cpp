#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad() {}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "Set Touch Pad Sensitivity: ";
    cin >> touchPadSensitivity;
    cout << endl;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
