#include <iostream>
#include "view.h"
#include "button.h"
#include "controller.h"

using namespace std;

int main()
{
    View *mainObjectView = new View;
    Button *mainObjectButton = new Button;
    Controller *mainObjectController;

    //Yhteyssuhteen 1:1 muodostaminen alla olevalla rivillä
    mainObjectController = new Controller(mainObjectView, mainObjectButton);

    delete mainObjectView;
    mainObjectView = nullptr;

    delete mainObjectButton;
    mainObjectButton = nullptr;

    delete mainObjectController;
    mainObjectController = nullptr;
    return 0;
}
