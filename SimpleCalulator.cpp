#include <iostream>
using namespace std;

int main() {

    int ope, x, y;

    do {    
        cout << "======================================\n";
        cout << "               CALCULATOR             \n";
        cout << "======================================\n";
        cout << " [1] Add.\n [2] Subtract.\n [3] Multiply.\n [4] Divide.\n [5] Mod.\n [6] Exit.\n";
        cout << "======================================\n";
        cout << " Enter your chosen operator: ";
        cin >> ope;

            switch (ope) {
                case 1:
                    cout << " Enter the numbers: ";
                    cin >> x >> y;
                    cout << "\n The sum is: " << x + y;
                    cout << "\n======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
                case 2:
                    cout << " Enter the numbers: ";
                    cin >> x >> y;
                    cout << "\n The difference is: " << x - y;
                    cout << "\n======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
                case 3:
                    cout << " Enter the numbers: ";
                    cin >> x >> y;
                    cout << "\n The product is: " << x * y;
                    cout << "\n======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
                case 4:
                    cout << " Enter the numbers: ";
                    cin >> x >> y;
                    cout << "\n The quotient is: " << x / y;
                    cout << "\n======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
                case 5:
                    cout << " Enter the numbers: ";
                    cin >> x >> y;
                    cout << "\n The remainder is: " << x % y;
                    cout << "\n======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
                case 6:
                    cout << " Thank you for using the program!\n";
                    cout << "======================================\n";
                    system ("pause");
                    system ("cls");
                    return 0;

                default:
                    cout << " Invalid Input!!\n";
                    cout << "======================================\n";
                    system ("pause");
                    system ("cls");
                    break;
            }
    } while (ope != 6);

    return 0;
}
