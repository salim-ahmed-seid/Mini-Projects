#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    float num1, num2;
    char op;
    int response;

    do{cout << "\nEnter an expression (e\.g\., 2 + 5):\n";
    getline(cin, input);

    stringstream ss(input);
    ss >> num1 >> op >> num2;

    switch(op) {
        case '+':
            cout << " = " << num1 + num2 << endl << endl;
            break;
        case '-':
            cout << " = " << num1 - num2 << endl << endl;
            break;
        case '*':
            cout << " = " << num1 * num2 << endl << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << " = " << num1 / num2 << endl << endl;
            else
                cout << "Error\! Division by zero\." << endl << endl;
            break;
        default:
            cout << "Error\! Operator is not correct" << endl << endl;
            break;
    }
    
    cout << "Press 1 if you want to continue. Press any other key to close" << endl;
    cin >> response;
    cin.ignore();
    }while(response == 1);
    
    cout << "\nExitingthe program." << endl;

    return 0;
}