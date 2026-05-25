    //  Type Casting
    //        |
    // -----------------
    // convesion    Casting
// # Type Casting vs Conversion

// ## Overview
// * **Conversion (Implicit):** Done by compiler. Small to large type. No data loss.
// * **Casting (Explicit):** Done by programmer. Large to small type. Risk of data loss.

#include <iostream>
using namespace std;
int main(){
    char grade = 'A';
    int value = grade; // This is type converstion.
    double price = 100.99;
    int newPrice = int(price);  // This is type Casting.
    cout << value <<"\n";
    cout << newPrice;

    return 0;
}