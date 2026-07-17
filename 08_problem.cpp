// Write a C++ program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    
    cout << "Enter the Number a : ";
    cin >> a;

    cout << "Enter the Number b : ";
    cin >> b;
    
    cout << "Before Swaping: a = " << a << ", b = " << b << endl;
    
    
    a = a + b; 
    b = a - b; 
    a = a - b;
    
    cout << "After swaping a = " << a << ", b = " << b << endl;
    
    return 0;
}
