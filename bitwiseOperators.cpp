#include <iostream>
using namespace std;
// bitwiseOperators
// 1.Bitwise & --> AND 
// 2.Bitwise | --> OR
// 3.Bitwise ^ --> XOR
// 4.Bitwise << --> Left shift  (n * 2^i)
// 5.Bitwise >> --> Right shift (n / 2^i)

int main(){

    int a = 4; //0100
    int b = 8; //1000
    
    cout << (a & b) << endl ; //0 (decimal)
    cout << (a | b) << endl ; //12 (decimal)
    cout << (a ^ b) << endl ; //12 (decimal)
    cout << (a << 1) << endl ; // (n << i) The number moves Left i times.
    cout << (a >> 1) << endl ; // (n >> i) The number moves Right i times.
    return 0;
}