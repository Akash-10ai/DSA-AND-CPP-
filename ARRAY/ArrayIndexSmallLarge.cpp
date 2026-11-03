#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minIdx = 0, maxIdx = 0;          // assume first element is both smallest and largest

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) minIdx = i;
        if (arr[i] > arr[maxIdx]) maxIdx = i;
    }

    cout << "Smallest element: " << arr[minIdx] << " at index " << minIdx << endl;
    cout << "Largest element:  " << arr[maxIdx] << " at index " << maxIdx << endl;

    return 0;
}