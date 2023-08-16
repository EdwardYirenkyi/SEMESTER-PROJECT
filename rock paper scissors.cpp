#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string choices[3] = {"Rock", "Paper", "Scissor"};
    
    char playAgain;

    do {
        cout << "Choose your move (0=Rock, 1=Paper, 2=Scissor): ";
        int userChoice;
        cin >> userChoice;

        if (userChoice < 0 || userChoice > 2) {
            cout << "Invalid choice. Please choose 0, 1, or 2." << endl;
            continue;
        }

        srand(time(0));
        int computerChoice = rand() % 3;

        cout << "You chose: " << choices[userChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing!" << endl;

    return 0;
}
	
	
