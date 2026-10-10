// Write a c++ program to find the Least Common multiple (LCM) of two Numbers.


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    int lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    for (int i = max(a, b); ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    cout << "LCM = " << lcm << endl;

    return 0;
}