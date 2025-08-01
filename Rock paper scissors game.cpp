#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int userChoice, computerChoice;

    cout << "Rock(1), Paper(2), Scissors(3)\n";
    cout << "Enter your choice: ";
    cin >> userChoice;

    computerChoice = rand() % 3 + 1;

    cout << "You chose: ";
    if (userChoice == 1) cout << "Rock\n";
    else if (userChoice == 2) cout << "Paper\n";
    else if (userChoice == 3) cout << "Scissors\n";
    else {
        cout << "Invalid input!\n";
        return 0;
    }

    cout << "Computer chose: ";
    if (computerChoice == 1) cout << "Rock\n";
    else if (computerChoice == 2) cout << "Paper\n";
    else cout << "Scissors\n";

    // Result
    if (userChoice == computerChoice) {
        cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win!\n";
    } else {
        cout << " Computer wins!\n";
    }

    return 0;
}

