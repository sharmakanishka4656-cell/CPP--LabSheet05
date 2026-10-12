// 7. Write a program to read numbers until -1 is entered, skip negative numbers using continue.
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    while (true) {
        cout << "Enter number (-1 to stop): ";
        cin >> n;
        if (n == -1) break;
        if (n < 0) continue;   // skip other negatives
        sum += n;
    }
    cout << "Sum of non-negative numbers: " << sum;
    return 0;
}
