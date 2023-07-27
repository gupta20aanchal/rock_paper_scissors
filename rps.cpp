#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    cout << "Welcome to Rock, Paper, Scissors!\n";
    cout << "Enter your choice (rock, paper, or scissors): ";
    
    string choices[] = { "rock", "paper", "scissors" };
    string userChoice, computerChoice;
    cin >> userChoice;

    // Generating a random choice for the computer
    srand(time(0));
    int computerIndex = rand() % 3;
    computerChoice = choices[computerIndex];

    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if (userChoice == "rock") {
        if (computerChoice == "paper") {
            cout << "Computer wins!\n";
        } else {
            cout << "You win!\n";
        }
    } else if (userChoice == "paper") {
        if (computerChoice == "scissors") {
            cout << "Computer wins!\n";
        } else {
            cout << "You win!\n";
        }
    } else if (userChoice == "scissors") {
        if (computerChoice == "rock") {
            cout << "Computer wins!\n";
        } else {
            cout << "You win!\n";
        }
    } else {
        cout << "Invalid choice. Please choose rock, paper, or scissors.\n";
    }

    return 0;
}
