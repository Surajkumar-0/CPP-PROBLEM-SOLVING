// Write a C++ program to print all even numbers from 1 to N.

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of N: ";
    cin >> n;

    cout << "All Even Numbers from 1 to " << n << " are :" << endl;

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

//     for (int i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//              cout << i << " ";
//         }
//     }