#include "devicemouse.h"

DeviceMouse::DeviceMouse() {}

void DeviceMouse::setPrimaryButton()
{
    cout << "Set Mouse Primary Button: ";
    cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
