// Write a C++ program to find the sum of the digits of a number.

#include <iostream>
using namespace std;

int main() {
    int num, remainder, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        remainder = num % 10;   
        sum += remainder;       
        num /= 10;              
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
