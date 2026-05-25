#include <iostream>
using namespace std;

int factOfNum(int a){
    int result = 1;
    if ( a == 0){
        result = 1;
    }
    if (a > 0){
        for (int i = a ; i > 0 ; i--){
            result *= i;
        }
    }
    return result;
}

int main(){

    int n;
    cout << "Enter the values of n: ";
    cin >> n;
    cout << "Factoial of "<< n << " is: "<< factOfNum(n);

    return 0;
}