// 15. Write a program to display Armstrong numbers between 1 and 500.
#include <iostream>
using namespace std;
int main() {
    for (int n = 1; n <= 500; n++) {
        int temp = n, digits = 0, sum = 0;
        while (temp > 0) { digits++; temp /= 10; }
        temp = n;
        while (temp > 0) {
            int d = temp % 10, p = 1;
            for (int i = 0; i < digits; i++) p *= d;
            sum += p;
            temp /= 10;
        }
        if (sum == n) cout << n << " ";
    }
    return 0;
}
