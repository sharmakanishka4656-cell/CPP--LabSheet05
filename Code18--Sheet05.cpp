// 18. Write a program to check whether a number is strong number.
#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter number: "; cin >> n;
    temp = n;
    while (temp > 0) {
        int d = temp % 10, f = 1;
        for (int i = 2; i <= d; i++) f *= i;
        sum += f;
        temp /= 10;
    }
    cout << n << (sum == n ? " is strong" : " is not strong");
    return 0;
}
