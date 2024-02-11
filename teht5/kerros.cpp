#include "kerros.h"

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

double Kerros::laskeKulutus(double kulutusHinta)
{
    return (as1->neliot*as1->asukasMaara+as2->neliot*as2->asukasMaara+as3->neliot*as3->asukasMaara+as4->neliot*as4->asukasMaara)*kulutusHinta;
}

Kerros::Kerros() {
    cout << "Kerros luotu" << endl;
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();

}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

