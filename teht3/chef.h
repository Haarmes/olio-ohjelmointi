#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef
{
public:
    Chef();
    ~Chef();
    Chef(string);
    void makeSalad();
    void makeSoup();
protected:
    string name;
};

#endif // CHEF_H
