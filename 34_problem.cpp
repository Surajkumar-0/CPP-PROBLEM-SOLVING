// Write a c++ program to find the Greatest common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    int gcd = 1;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    cout << "GCD = " << gcd << endl;

    return 0;
}