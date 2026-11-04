#include <iostream>
using namespace std;

bool isPresent(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;

    cout << "Is 6 present? "  << (isPresent(arr, n, 6)  ? "Yes" : "No") << endl;
    cout << "Is 7 present? "  << (isPresent(arr, n, 7)  ? "Yes" : "No") << endl;

    return 0;
}