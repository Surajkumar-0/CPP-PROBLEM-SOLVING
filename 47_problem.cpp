// Write a c++ program to print an alphabet triangle pattern.


#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }

    return 0;
}
