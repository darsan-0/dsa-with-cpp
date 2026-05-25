#include <iostream>
using namespace std;

int powerSimple(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}
int DecimalToBiary(int d){
    int i = 0;
    int rem = 0;
    int res = 0;
    while (d > 0){
        rem = d%2;
        res += powerSimple(10,i)*rem;
        d = d/2;
        i++;
    }
    return res;
}

int main(){

    
    int decimal;
    cout << "Enter the Decimal number: ";
    cin >> decimal;
    cout << DecimalToBiary(decimal);

    return 0;
}