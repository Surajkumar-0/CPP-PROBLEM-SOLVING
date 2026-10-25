// Write a c++ program to find the second largest element in an array.

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least 2 elements.";
        return 0;
    }

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "Second largest distinct element does not exist.";
    } else {
        cout << "Second largest element = " << secondLargest;
    }

    return 0;
}
