#include <iostream>
using namespace std;

void sumN(int n){
    int sum = 0;
    while(n>0){
        sum += n;
        n--;
    }
    cout << sum;
}

int main(){

    int n;
    cout << "Enter the values of n: ";
    cin >> n;
    cout << "The sum of "<< n << " Natural numbers is : "  << endl;
    sumN(n);

    return 0;
}