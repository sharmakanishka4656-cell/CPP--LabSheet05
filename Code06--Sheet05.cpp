// 6. Write a program to check if a number is prime, terminate loop early using break.
#include <iostream>
using namespace std;
int main() {
    int n, isPrime = 1;
    cout << "Enter number: "; cin >> n;
    if (n < 2) isPrime = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    cout << n << (isPrime ? " is prime" : " is not prime");
    return 0;
}
