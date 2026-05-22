    //  Type Casting
    //        |
    // -----------------
    // convesion    Casting
/**1.Conversion --> Its Implicit (It is done by the compiler.)
- There is no loos of date [Big date type to smaller one.]
2.Casting -->Explicit ,It is deon by the Programer forece fully.
- There may be loos of date [Small date type to Bigger one.]
*/
// Convering Data from one type to another type.

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