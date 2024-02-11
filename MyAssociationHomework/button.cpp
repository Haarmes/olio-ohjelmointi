#include "button.h"


char Button::readKeyboard()
{
    character =  char(getch());
    return character;
}
