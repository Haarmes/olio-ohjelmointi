#include "chef.h"

Chef::Chef()
{
    cout << "Chef default constructor"<< Chef::name <<endl;

}

Chef::~Chef()
{
    cout << "Chef " << Chef::name << " destruktori" << endl;
}

Chef::Chef(string chefName) {
    cout << "Chef " << chefName << " konstruktori" << endl;
    name = chefName;
}

void Chef::makeSalad()
{
    cout << "Chef " << Chef::name << " make salad" << endl;
}

void Chef::makeSoup()
{
cout << "Chef " << Chef::name << " make soup" << endl;
}
