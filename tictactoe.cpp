#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char board[3][3];

void initializeBoard();
void printBoard();
bool checkWin(char currentPlayer);
bool checkDraw();

int main()
{
    bool gameEnd;
    char again;
    const char playerX = 'X';
    const char playerO = 'O';

    do {
        gameEnd = false;
        initializeBoard();
        printBoard();
        char currentPlayer = playerX;
    
        do {
            int slot;

            cout << currentPlayer << "'s Turn" << endl;
            cout << "Input Number: ";
            cin >> slot;

            int r = (slot - 1) / 3;
            int c = (slot - 1) % 3;

            if (slot < 1 || slot > 9 || board[r][c] == 'X' || board[r][c] == 'O') {
                cout << "Invalid move. Try again.\n";
                continue;
            }

            system ("cls");
            board[r][c] = currentPlayer;
            printBoard();

            if (checkWin(currentPlayer)) {
                cout << "Player " << currentPlayer << " Wins!\n"; 
                gameEnd = true;
            } else if (checkDraw()) {
                cout << "Its a Draw!!!";
                gameEnd = true;
            } else {
                currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
            }

        } while (!gameEnd);

        cout << "Play Again? (Y/N): ";
        cin >> again;
        system ("cls"); 
    } while (again == 'Y'|| again == 'y');

    return 0;
}

void initializeBoard() {
    char start = '1';

    for (int i = 0; i < 3; i++) {
       for (int j = 0; j < 3; j++) {
            board[i][j] = start++;
       }  
    }
}

void printBoard() {
    cout << "\n-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

bool checkWin(char currentPlayer) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) return true;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) return true;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) return true;

    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
        }
    }
    return true;
}