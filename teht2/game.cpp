#include "game.h"


Game::Game()    // konstruktori kun ei ole syötetty mitään arvoa
    {
    cout << "Vakio konstruktori" << endl;
    }

Game::Game(int number1)     // konstruktori kun syötetty arvo on integer
    {
    maxNumber = number1;
        cout << "GAME CONSTRUCTOR: object initialized with " << number1 << " as a maximum value"<< endl;
}

Game::~Game()      // destruktori
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    // Alustetaan seed random funktiolle
    srand(time(0));

    // Alustetaan random luku, kayttajan luku ja arvausten maara
    randomNumber = rand()%maxNumber+1;
    playerGuess = -1;
    numOfGuesses = 0;
    // Looppi jossa kysytaan kayttajan numeroa ja vertaillaan sita
    while(randomNumber != playerGuess){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;

        if(playerGuess<randomNumber){
            cout << "Your guess is too small" << endl;
        }
        else if(playerGuess>randomNumber){
            cout << "Your guess is too big" << endl;
        }
        else
        {
            cout << "Your guess is right = " << playerGuess << endl;
        }
        numOfGuesses += 1;
    }
    printGameResult();
    return;
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << playerGuess << " with " << numOfGuesses << " guesses" << endl;
}
