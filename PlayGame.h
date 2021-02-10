#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction(int Difficulity)
{
    //Print welcome message to terminal
    cout << "\n\n You found a random usb and wanna peek inside...\n";
    cout << "Enter code to unlock the folders inside\n";
    cout << "You start at folder:  " << Difficulity << "\n";
    cout << "===========================================================\n";
}

bool PlayGame(int Difficulity)
{
    PrintIntroduction(Difficulity);

    //Numer Player has to guess, pointer uses in CodeA here
    const int CodeA  = rand() % Difficulity + Difficulity;
    const int CodeB = rand() % Difficulity + Difficulity;
    const int CodeC = rand() % Difficulity + Difficulity;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProd = CodeA * CodeB * CodeC;

    //Allows you to see answer
    //cout << CodeA << CodeB << CodeC;

    //Print sum and product to the terminal
    cout << "\n + Code contains 3 different numbers";
    cout << "\n + The code add-up to: " << CodeSum;
    cout << "\n + The code multiply to: " << CodeProd << "\n";

    //Storage for player guesses
    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;

    //Allows to see what player typed in
    //cout << "You entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProd = GuessA * GuessB * GuessC;

    cout << "\n The code you wrote add-up to: " << GuessSum;
    cout << "\n The code you wrote multiply to give: " << GuessProd;

    //Check if the player guess is correct
    if (GuessSum == CodeSum && GuessProd == CodeProd)
    {
        cout << "\n You guessed the code!";
        return true;
    }
    else
    {
        cout << "\n Still locked, try again";
        return false;
    }
}