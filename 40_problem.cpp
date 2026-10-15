// Write a c++ program to check whether a number is a Neon number.

#include <iostream>
using namespace std;

int main() {
    int num, square, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while (square > 0) {
        digit = square % 10;
        sum = sum + digit;
        square = square / 10;
    }

    if (sum == num) {
        cout << "Neon Number";
    } else {
        cout << "Not a Neon Number";
    }

    return 0;
}
