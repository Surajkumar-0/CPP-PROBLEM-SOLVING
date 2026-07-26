// Write a C++ program to convert uppercase letters to lowercase.

#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter a uppercase letter : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
        cout << "Lowercase character is : " << ch;
    }
    else
    {
        cout << "Please enter an uppercase letter.";
    }

    return 0;
}