#include <iostream>
using namespace std;

int main() {
    // Outer loop
    for (int row = 1; row <= 3; row++) {
        cout << "Outer loop row: " << row << endl;

        // Inner loop
        for (int col = 1; col <= 3; col++) {
            if (col == 2) {
                cout << "   [Break triggered at col " << col << "]" << endl;
                break; // This ONLY breaks the inner loop
            }
            cout << "   Inner loop col: " << col << endl;
        }
        
        cout << "Outer loop row " << row << " finishes handling its inner loop." << endl << endl;
    }

    return 0;
}
