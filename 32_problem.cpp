// Write a C++ program to print all prime numbers between two given numbers.

#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter first number: ";
    cin >> start;

    cout << "Enter second number: ";
    cin >> end;

    for (int i = start; i <= end; i++)
    {
        if (i <= 1)
        {
            continue;
        }

        bool isPrime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
        }
    }

    return 0;
}