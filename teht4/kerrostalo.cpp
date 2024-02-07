#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koo kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double kulutusHinta)
{
    return eka.laskeKulutus(kulutusHinta)+toka.laskeKulutus(kulutusHinta)+kolmas.laskeKulutus(kulutusHinta);
}
