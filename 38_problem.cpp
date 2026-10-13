// Write a c++ program to check whether a number is a perfect number.


#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num && num > 0) {
        cout << "Perfect Number";
    } else {
        cout << "Not a Perfect Number";
    }

    return 0;
}
