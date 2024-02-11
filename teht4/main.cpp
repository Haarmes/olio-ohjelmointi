#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Asunto a;
    a.maarita(2, 100);
    cout << "Asunnon kulutus, kun hinta=1 on " << a.laskeKulutus(1) << endl;

    //Kerros b;
    Katutaso c;
    c.maaritaAsunnot();
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<< c.laskeKulutus(1)<< endl;
    Kerrostalo d;
    cout << "Kerostalon kulutus, =" << d.laskeKulutus(1) << endl;
}
