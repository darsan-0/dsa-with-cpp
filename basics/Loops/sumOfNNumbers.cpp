// Sum of N +ve numbers
#include <iostream>
using namespace std;

int main(){

    int num,sum = 0 ;
    int oddSum = 0;
    cout << "Enter the value of num: " << endl;
    cin >> num ;
    // Sum of n numbers
    for (int i=1 ; i <=num ; i++){
        sum += i;
    }
    // sum of odd numbers upto n
    for (int i=1 ; i <=num ; i++){
        if (i%2 != 0){
            oddSum += i;
        }
    }
    cout << "The sum of " << num << " numbers is :" << sum;
    cout << "The sum of odd numbers upto " << num << " is :" << oddSum;
    return 0;
}