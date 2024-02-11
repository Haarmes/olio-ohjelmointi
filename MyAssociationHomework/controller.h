#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "button.h"
#include "view.h"
#include <conio.h>
#include <iostream>
using namespace std;

class Controller: public Button, public View
{
public:
    Controller();
    Controller(View *, Button *);
    void listenMessages();
private:
    View *objectView;
    Button *objectButton;
};

#endif // CONTROLLER_H
