#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number to check prime or not prime: ";
    cin >> n;

    if (n < 2) {
        cout << n << " is not prime." << endl;
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " is not prime." << endl;
            return 0; 
        }
    }

    cout << n << " is prime." << endl;

    return 0;
}
