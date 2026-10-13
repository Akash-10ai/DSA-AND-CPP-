#include <iostream>
using namespace std;

int main() {
    int target = 4;

    cout << "Starting loop from 1 to 10..." << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "Checking number: " << i << endl;

        // Condition to trigger the break
        if (i == target) {
            cout << "Target number " << target << " found! Exiting loop early..." << endl;
            break; 
        }
    }

    cout << "Loop ended. Continuing with the rest of the program." << endl;
    return 0;
}
