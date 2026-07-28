// Write a C++ program to print numbers from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are :" << endl;
    
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
