// cpp programt to print reverse triangle pattern
#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for the number of rows (counting down)
    for (int i = rows; i >= 1; i--) {
        // Inner loop to print the stars for each row
        for (int j = 1; j <= i; j++) {
            cout << "  ";
        }
        // Move to the next line after printing all stars in the row
        cout << endl;
    }

    return 0;
}
