#include "Game.h"

Game::Game(int number)
{
    cout << "GAME CONSTRUCTOR: object initiaized with " << number << " as a maximum value" << endl;
    maxNumber = number;
    srand(time(0));
}
Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
void Game::play()
{
    randomNumber = std::rand() % (maxNumber+1);
    cout << "Give your guess between 1-" << maxNumber << endl;
    while (playerGuess != randomNumber)
    {
        numOfGuesses++;
        cin >> playerGuess;
        if(playerGuess == randomNumber)
        {
            cout << "Your guess is right = " << playerGuess << endl;
        } else if(playerGuess > randomNumber)
        {
            cout << "Your guess is too big" << endl;
        } else if(playerGuess < randomNumber)
        {
            cout << "Your guess is too small" << endl;
        }
    }
    printGameResult();
}
void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
