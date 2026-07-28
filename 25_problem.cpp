//  Write a C++ program to print the multiplication table of a given number.


#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number to print its multiplication table: ";
    cin >> num;

    cout << "Multiplication Table of " << num << ":" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    
    return 0;
}
