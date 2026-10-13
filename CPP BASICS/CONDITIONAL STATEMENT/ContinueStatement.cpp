#include <iostream>
using namespace std;

int main() {
    cout << "--- Printing numbers 1 to 10 (skipping 5 and 7) ---" << endl;

    for (int i = 1; i <= 10; i++) {
        // If i is 5 or 7, skip the printing step and jump to the next loop iteration
        if (i == 5 || i == 7) {
            cout << "Skipping " << i << "..." << endl;
            continue; 
        }

        // This line is skipped whenever the continue statement executes
        cout << "Number: " << i << endl;
    }

    cout << "\nLoop finished successfully!" << endl;
    return 0;
}
