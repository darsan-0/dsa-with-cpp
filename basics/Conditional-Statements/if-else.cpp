// Check the given number is +ve or not.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number to check +ve or not: "<< endl;
    cin >> num;

    if (num >= 0){
        cout << "The given number is +ve";
    }
    else {
        cout << "The given number is not a +ve";
    }
    
    return 0;
}