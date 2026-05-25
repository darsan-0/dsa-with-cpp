#include <iostream>
using namespace std;

int sumOfDigitsOfNum(int num){
    int sum = 0;
    int res = 0;
    while (num != 0){

        res = num % 10;
        sum += res;
        num = num /10;
    }
    return sum;

}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << sumOfDigitsOfNum(n);


    return 0;
}