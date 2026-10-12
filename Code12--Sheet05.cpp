// 12. Write a program to generate Fibonacci series using while loop.
#include <iostream>
using namespace std;
int main() {
    int n, a = 0, b = 1, i = 1;
    cout << "Enter number of terms: "; cin >> n;
    while (i <= n) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
        i++;
    }
    return 0;
}
