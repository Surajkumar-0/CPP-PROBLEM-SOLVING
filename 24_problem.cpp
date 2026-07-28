// Write a C++ program to print all odd numbers from 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "All odd Numbers from 1 to " << n << " are :" << endl;

    for (int i = 1; i <= n; i += 2)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}