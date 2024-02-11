#include <iostream>
#include "devicebaseclass.h"
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI mainUI;
    mainUI.uiShowMenu();
    return 0;
}
