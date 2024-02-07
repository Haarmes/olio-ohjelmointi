#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;

class ItalianChef: public Chef
{
public:
    ~ItalianChef();
    ItalianChef(string);
    string getName();
    void makePasta();
    ItalianChef(string, int, int);
private:
    int vesi;
    int jauhot;

};

#endif // ITALIANCHEF_H
