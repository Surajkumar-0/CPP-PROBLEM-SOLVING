// Write a C++ program to find the largest of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first Number: ";
    cin >> a;

    cout << "Enter the second Number: ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is the largest Number";
    }
    else if (b > a)
    {
        cout << b << " is the largest Number";
    }
    else
    {
        cout << "Both numbers are equal";
    }

    return 0;
}