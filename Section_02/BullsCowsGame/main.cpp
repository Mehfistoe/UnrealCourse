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


int main() {
	// constexpr cannot be changed
	constexpr int WORD_LENGTH = 5;

	//std::cout << "Welcome to Bulls and Cows!\n";
	cout << "Welcome to Bulls and Cows!" << endl;
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?" << endl;

	// get a guess from the player
	// guess needs to be one VALID word
	string player_guess;
	cout << "Guess the word: ";
	// you need to use getline because >> splits input on whitespace characters
	// this register as two guesses
	getline(cin, player_guess);

	// repeat the guess back to them
	cout << "Your guess was: " << player_guess << endl;

	return 0;
}