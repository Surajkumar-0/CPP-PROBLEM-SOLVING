// Write a C++ program to swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nBefore Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    temp = a;   
    a = b;      
    b = temp;   

    cout << "\nAfter Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}