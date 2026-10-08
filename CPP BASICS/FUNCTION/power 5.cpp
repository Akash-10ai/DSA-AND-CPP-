#include <iostream>
using namespace std;

// Function declaration and definition
// This function takes an integer and returns its 5th power
long long raiseToPowerFive(int base) {
    long long result = 1;
    for (int i = 0; i < 5; ++i) {
        result *= base;
    }
    return result; // Returns the calculated value
}

int main() {
    int number;

    // Taking user input
    cout << "Enter an integer: ";
    cin >> number;

    // Calling the function and saving the return value
    long long answer = raiseToPowerFive(number);

    // Displaying the result
    cout << number << " raised to the power of 5 is: " << answer << endl;

    return 0;
}
