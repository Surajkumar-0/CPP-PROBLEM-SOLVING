// Write a c++ program to check whether a number is an Automorphic number.


#include <iostream>
using namespace std;

int main() {
    int num, square, temp;
    
    cout << "Enter a number: ";
    cin >> num;

    square = num * num;
    temp = num;

    while (temp > 0) {
        if (temp % 10 != square % 10) {
            cout << "Not an Automorphic Number";
            return 0;
        }

        temp = temp / 10;
        square = square / 10;
    }

    cout << "Automorphic Number";

    return 0;
}

