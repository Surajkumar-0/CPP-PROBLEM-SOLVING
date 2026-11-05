// Write a c++ program to perform linear search.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (found == false) {
        cout << "Element not found";
    }

    return 0;
}
