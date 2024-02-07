#include "italianchef.h"

ItalianChef::ItalianChef(string chefName):Chef(chefName) {

}


ItalianChef::~ItalianChef()
{

}

string ItalianChef::getName()
{
    return Chef::name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << Chef::name << " Makes pasta with special recipe" << endl;
    cout << "Chef " << Chef::name << "users jauhot = " << ItalianChef::jauhot << endl;
    cout << "Chef " << Chef::name << "users vesi = " << ItalianChef::vesi << endl;
}

ItalianChef::ItalianChef(string chefName, int jauhomaara, int vesimaara):Chef(chefName)
{
    Chef::name = chefName;
    cout << "Chef " << Chef::name << " konstruktori" << endl;
    ItalianChef::jauhot = jauhomaara;
    ItalianChef::vesi = vesimaara;
}
