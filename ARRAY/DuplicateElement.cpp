#include <iostream>

int main() {
    int arr[] = {4, 9, 4, 7, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int count = 0;

    std::cout << key << " found at index: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            std::cout << i << " ";
            count++;
        }
    }

    if (count == 0)
        std::cout << "none (element not found)";
    else
        std::cout << "\nTotal occurrences: " << count;

    std::cout << std::endl;
    return 0;
}