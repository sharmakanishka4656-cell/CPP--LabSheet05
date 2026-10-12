// 14. Write a program to check whether a given number is Armstrong or not.
#include <iostream>
using namespace std;
int main() {
    int n, temp, digits = 0, sum = 0;
    cout << "Enter number: "; cin >> n;
    temp = n;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        int d = temp % 10, p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    cout << n << (sum == n ? " is Armstrong" : " is not Armstrong");
    return 0;
}
