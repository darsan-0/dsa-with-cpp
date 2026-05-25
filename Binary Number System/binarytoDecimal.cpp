#include <iostream>
using namespace std;


int BinaryToDecimal(int b){
    int res = 0;
    int rem = 0;
    int pow = 1;

    while (b>0){

        rem = b%10;
        res += rem * pow;
        pow *= 2;
        b = b/10;
    }
    return res;
}

int main(){
    int binary;
    cout << "Enter the Binary number: ";
    cin >> binary;
    cout << "Decimal value: " << BinaryToDecimal(binary) << endl;

    return 0;
}