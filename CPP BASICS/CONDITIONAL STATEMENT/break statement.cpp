// positive number adder using break statement 
#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "--- Positive Number Adder ---" << endl;
    cout << "Enter negative number to stop." << endl << endl;

    // while(true) creates an infinite loop
    while (true) { 
        cout << "Enter a number: ";
        cin >> number;

        // If the number is negative, terminate the loop immediately
        if (number < 0) {
            cout << "Negative number detected. Breaking out of the loop..." << endl;
            break; 
        }

        // Add the number to total sum if it's positive
        sum += number;
    }

    // The program continues here after the break statement runs
    cout << "\nThe total sum of all positive numbers is: " << sum << endl;

    return 0;
}