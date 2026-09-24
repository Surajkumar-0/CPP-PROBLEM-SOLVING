// Write a C++ program to check whether a number is prime.

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = false;
    } else {
        // Check if n is divisible by any number from 2 to n-1
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false; // Found a factor
                break;           // Exit the loop early
            }
        }
    }

    // Output the result
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
