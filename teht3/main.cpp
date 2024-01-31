#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    // Chef chef1("Jyrki");
    ItalianChef chef2("Mario", 250, 100);
    // chef1.makeSalad();
    chef2.makePasta();
    // chef1.makeSoup();
    return 0;
}
