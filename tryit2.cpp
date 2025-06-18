#include <iostream>
using namespace std;

int main() {
    float a, b;

    // Input two floating-point numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Perform and display arithmetic operations
    cout << "\n--- Arithmetic Operations ---\n";
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;

    if (b != 0) {
        cout << "Division: " << (a / b) << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}
