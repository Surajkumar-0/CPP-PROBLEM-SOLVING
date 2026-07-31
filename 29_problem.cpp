// Write a C++ program to check whether a number is an Armstrong number.

#include <iostream>
#include <cmath> // Needed for pow() function
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Count the total number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate the sum of the power of individual digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += round(pow(remainder, n)); // round() prevents floating-point errors
        temp /= 10;
    }

    // Check if the sum matches the original number
    if (result == originalNum)
        cout << originalNum << " is an Armstrong number." << endl;
    else
        cout << originalNum << " is not an Armstrong number." << endl;

    return 0;
}
