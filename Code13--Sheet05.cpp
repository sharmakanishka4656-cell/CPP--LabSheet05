// 13. Write a program to find and print all prime numbers between 1 and N.
#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter N: "; cin >> N;
    for (int n = 2; n <= N; n++) {
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) { isPrime = 0; break; }
        }
        if (isPrime) cout << n << " ";
    }
    return 0;
}
