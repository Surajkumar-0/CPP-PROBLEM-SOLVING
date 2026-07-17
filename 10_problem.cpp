// Write a C++ program to check whether a number is positive, negative, or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the Number: ";
    cin >> num;

    if (num > 0)
    {
        cout << num << " is Positive";
    }
    else if (num < 0)
    {
        cout << num << " is Negative";
    }
    else
    {
        cout << num << " is Zero";
    }

    return 0;
}