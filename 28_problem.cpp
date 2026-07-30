// Write a C++ program to check whether a number is a palindrome.

#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, remainder;
    
    cout << "Enter a number: ";
    cin >> num;
    
    int original = num; 

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (original == reversedNum)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
