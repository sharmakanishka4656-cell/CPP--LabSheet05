// 16. Write a program to check whether a number is perfect number.
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter number: "; cin >> n;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    cout << n << (sum == n && n > 0 ? " is perfect" : " is not perfect");
    return 0;
}
