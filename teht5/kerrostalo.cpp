#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koo kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double kulutusHinta)
{
    return eka->laskeKulutus(kulutusHinta)+toka->laskeKulutus(kulutusHinta)+kolmas->laskeKulutus(kulutusHinta);
}
