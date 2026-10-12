// 5. Write a program to simulate a menu-driven calculator with default in switch.
#include <iostream>
using namespace std;
int main() {
    double a, b;
    int choice;
    cout << "1.Add 2.Subtract 3.Multiply 4.Divide\nEnter choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    switch (choice) {
        case 1: cout << a + b; break;
        case 2: cout << a - b; break;
        case 3: cout << a * b; break;
        case 4:
            if (b != 0) cout << a / b;
            else cout << "Cannot divide by zero";
            break;
        default: cout << "Invalid choice";
    }
    return 0;
}
