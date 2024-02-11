#ifndef BUTTON_H
#define BUTTON_H
#include <conio.h>
#include <iostream>
using namespace std;

class Button
{
public:
    char readKeyboard();
private:
    char character;
};

#endif // BUTTON_H
