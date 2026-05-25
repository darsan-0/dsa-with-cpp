#include <iostream>
using namespace std;

int main(){
    //Operator Precedence
    cout << (5 - 2 * 6) << endl;
    cout << ((5 - 2) * 6) << endl;

    //Operator Associativity
    cout << (4 * 5 % 2) << endl;

    return 0;
}