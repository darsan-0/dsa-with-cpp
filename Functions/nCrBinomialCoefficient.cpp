#include <iostream>
using namespace std;
int fact(int x){
    int fact = 1;
    for (int i=1 ; i <= x ; i++){
        fact *= i;
    }
    return fact;
}

int nCrBinomialCoefficient(int n,int r){
    if (r > n) return 0; 
    return fact(n)/(fact(r)*fact(n-r));

}

int main(){

    int n;
    cout << "Enter the values of n: ";
    cin >> n;
    
    int r;
    cout << "Enter the values of r: ";
    cin >> r;
    cout << "Result: " << nCrBinomialCoefficient(n, r) << endl;

    return 0;
}