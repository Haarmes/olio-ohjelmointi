#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    // Tehtava 1
    /*
    Asunto *a;
    a = new Asunto;
    a->maarita(2, 100);
    cout << "Asunnon kulutus, kun hinta=1 on " << a->laskeKulutus(1) << endl;
    delete a;
    */

    // Tehtava 2
    /*
    Katutaso *c;
    c = new Katutaso;
    c->maaritaAsunnot();
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<< c->laskeKulutus(1)<< endl;
    delete c;
    */

    // Tehtava 3
    Kerrostalo *d;
    d = new Kerrostalo();
    cout << "Kerostalon kulutus, =" << d->laskeKulutus(1) << endl;
    delete d;
}
