#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = a++; //work then Update
    cout  << a << "\n" << b << endl; // 11,10

    int c = 10;
    int d = ++c; //Update then work
    cout  << c << "\n" << d << endl; // 11,11
    
    int w = 10;
    int x = w--; //work then Update
    cout  << w << "\n" << x << endl; // 9,10

    int y = 10;
    int z = --y; //Update then work
    cout  << y << "\n" << z << endl; // 9,9
    return 0;
}