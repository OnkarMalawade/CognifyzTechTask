#include <iostream>
using namespace std;
// task 2
int main() {
    double num1, num2;
    char op;
    double result;
    // Prompt the user to enter 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> op;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '%':
            if (static_cast<int>(num2) != 0) {
                result = static_cast<int>(num1) % static_cast<int>(num2);
            } else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            return 1;
    }

    cout << "The result is: " << result << endl;

    return 0;
}

