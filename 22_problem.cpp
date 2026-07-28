// Write a C++ program to print numbers from N to 1.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    cout << "Numbers from " << n << " to 1 are :" << endl;
    
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    
    cout << endl;
    return 0;
}
