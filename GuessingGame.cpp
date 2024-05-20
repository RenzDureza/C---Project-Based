#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char again;

    do {
        int randomNumber = rand() % 9 + 1;
        int guess;
        do {
            cout << "==============================\n";
            cout << "Guess the number from 1 - 9: ";
            cin >> guess;   
            if (guess < randomNumber) {
                cout << "Guess higher!\nTry Again!\n";
            } else if (guess > randomNumber) {
                cout << "Guess lower!\nTry Again!\n";
            } else {
                cout << "Congrats, You win!!\n";
            }
        } while (guess != randomNumber);

        cout << "Would you like to play again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');
    cout << "\nThank you for playing the game :)\n";
    return 0;
}
