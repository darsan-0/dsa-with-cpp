#include <iostream>
using namespace std;

int main(){

    int a = 10 , b = 5 , c = 0;

    // Arithmetic Operators ( + , - , * , / , %)
    cout << "Addition: " << a+b <<"\n";
    cout << "Difference: " << a-b <<"\n";
    cout << "Multiplication: " << a*b <<"\n";
    cout << "Divison: " << a/b <<"\n";
    cout << "Modulus: " << a%b <<"\n";


    // Relational Operators (< , > , <= , >= , == , != )
    cout << "<  " << (a < b) << endl;
    cout << ">  " << (a > b) << endl;
    cout << "<= " << (a <= b) << endl;
    cout << ">= " << (a >= b) << endl;
    cout << "== " << (a == b) << endl;
    cout << "!= " << (a != b) << endl;

    // Logical Operators ( ||, && , !)
    cout << "|| (OR)  -->  " << ( (a < b) || (b < c) )<< endl;
    cout << "&& (AND)  --> " << ( (a < b) && (b < c) )<< endl;
    cout << "! (NOT)  -->  " << ( ! (b < c) )<< endl;

    return 0;
}