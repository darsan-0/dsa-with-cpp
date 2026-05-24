#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // ==========================================
    // TOP PART (Includes the peak and upper half)
    // ==========================================
    for (int i = 0; i < n; i++) {

        // Print leading spaces: decreases as we go down (n-1, n-2, ..., 0)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print the left border asterisk
        cout << "*";

        // Print inner spaces and the right border asterisk (skipped for the very first row)
        if (i != 0) {
            // Inner spaces follow the odd number sequence: 1, 3, 5, ..., (2i - 1)
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Print the right border asterisk
            cout << "*";
        }
        
        // Move to the next row
        cout << "\n";
    }

    // ==========================================
    // BOTTOM PART (Includes lower half and bottom tip)
    // ==========================================
    for (int i = 0; i < n - 1; i++) {
        
        // Print leading spaces: increases as we go down (1, 2, 3, ..., n-1)
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        
        // Print the left border asterisk
        cout << "*";

        // Print inner spaces and right border asterisk (skipped for the very last row tip)
        if (i != n - 2) {
            // Inner spaces decrease based on the formula: 2*(n-i) - 5
            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            // Print the right border asterisk
            cout << "*";
        }
        
        // Move to the next row
        cout << "\n";
    }

    return 0;
}
