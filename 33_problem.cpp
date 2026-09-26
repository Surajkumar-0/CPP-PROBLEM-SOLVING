// Write a C++ program to generate the Fibonacci series up to N terms.

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int first = 0;
    int second = 1;
    int next;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}