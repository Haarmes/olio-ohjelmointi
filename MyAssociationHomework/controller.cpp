#include "controller.h"

Controller::Controller() {
    cout << "default constructor for controller" << endl;
}

Controller::Controller(View *paraViewPtr, Button *paraBtnPtr)
{
    objectView = paraViewPtr;
    objectButton = paraBtnPtr;
    this->listenMessages();
}

void Controller::listenMessages()
{
    char keyPressed = 'O';

    while (keyPressed != 'q'){
        if (kbhit()){
            keyPressed =objectButton->readKeyboard();
            objectView->printCharacter(keyPressed);
        }
    }
}
