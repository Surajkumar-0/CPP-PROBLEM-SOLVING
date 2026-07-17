// Write a C++ program to check whether a number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the Number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << num << " is even";
    }
    else
    {
        cout << num << " is odd";
    }

    return 0;
}