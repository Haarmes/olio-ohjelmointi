#include "katutaso.h"

Katutaso::Katutaso() {
    cout << "Katutaso luotu"<< endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja"<< endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double kulutusHinta)
{
    double katutasoKerrosHinta = Kerros::laskeKulutus(kulutusHinta);
    double katutasoHinta = (as1.neliot*as1.asukasMaara)+(as2.neliot*as2.asukasMaara)*kulutusHinta;
    return katutasoKerrosHinta + katutasoHinta;
}
