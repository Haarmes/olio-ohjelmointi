#include "asunto.h"

Asunto::Asunto() {
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto()
{
    //empty?
}

void Asunto::maarita(int numero1, int numero2)
{
    asukasMaara = numero1;
    neliot = numero2;
    cout << "Asunto maaritetty asukkaita= "<< numero1 << " nelioita= " << numero2 << endl;
}

double Asunto::laskeKulutus(double kulutusHinta)
{
    return kulutusHinta*asukasMaara*neliot;
}
