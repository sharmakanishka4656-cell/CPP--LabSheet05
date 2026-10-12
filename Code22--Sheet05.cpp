// 22. Write a program to check whether a given number is Harshad number.
#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter number: "; cin >> n;
    temp = n;
    while (temp > 0) { sum += temp % 10; temp /= 10; }
    cout << n << (n % sum == 0 ? " is Harshad" : " is not Harshad");
    return 0;
}
