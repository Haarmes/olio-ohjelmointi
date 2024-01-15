#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum){
    // Alustetaan seed random funktiolle
    srand(time(0));

    // Alustetaan random luku, kayttajan luku ja arvausten maara
    int randomNumber = rand()%maxnum+1;
    int userNumber = -1;
    int guessAttempts = 0;

    cout << "Satunnaisluku on " << randomNumber << endl;

    // Looppi jossa kysytaan kayttajan numeroa ja vertaillaan sita
    while(randomNumber != userNumber){
        cout << "Arvaa numbero 1-" << maxnum << endl;
        cin >> userNumber;

        if(userNumber<randomNumber){
            cout << "Arvaus on pienempi kuin luku" << endl;
        }
        else if(userNumber>randomNumber){
            cout << "Arvas on suurempi kuin luku" << endl;
        }
        guessAttempts += 1;
    }
    cout << "Arvasit oikein!" << endl;
    return guessAttempts; // Palautetaan arvausten maara
}
int main()
{

    int gameReturn = game(50);
    cout << "Arvausten maara = " << gameReturn << endl;
    return 0;
}
