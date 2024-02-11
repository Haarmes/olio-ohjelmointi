#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay() {}

void DeviceDisplay::setDisplayResolution()
{
    cout << "Set Display Resolution: ";
    cin >> displayResolution;
    cout << endl;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
