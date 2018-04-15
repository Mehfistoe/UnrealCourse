// Anything that starts with # is a preprocessor directive
/* #include cuts and pastes from another file and brings it into this program
allowing us to use the functions from the included file. */
#include <iostream>

// Use <> to includes standard libraries, "" to include your own code
#include <string>
#include <algorithm>
#include <cctype>

// brings std to the global scope so that you don't have to type 'std::'
using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// the entry point of our application
// You want to keep your main function at the top
int main()
{

    PrintIntro();
   
    constexpr int NUMBER_OF_TURNS = 5;
    for(int i = 0; i < NUMBER_OR_TURNS; i++)
    {
        GetGuessAndPrintBack();
        cout << endl;
    }

    cout << endl;
	return 0;
}

// prints the intro of the game
void PrintIntro()
{
	// constexpr cannot be changed
	constexpr int WORD_LENGTH = 9;

	//std::cout << "Welcome to Bulls and Cows!\n";
	cout << "Welcome to Bulls and Cows!" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;
    return;
}

// get and prints a guess from the player
string GetGuessAndPrintBack()
{
    string playerGuess;
    // get a guess from the player
    // guess needs to be one VALID word
    cout << "Guess the word: ";
    // you need to use getline because >> splits input on whitespace characters
    // this register as two guesses
    getline(cin, playerGuess);

    // repeat the guess back to them
    cout << "Your guess was: " << playerGuess << endl;
    return playerGuess;
}
