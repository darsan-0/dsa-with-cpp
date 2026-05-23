#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the value of num: ";
    cin >> num ;
    int count = 1;
    for ( int i = 1 ; i <= num ; i++){

        for (int j = 1 ; j < i+1 ; j++){
            cout << count << " ";
            count ++;
        }
        cout << "\n" ;
    }

    return 0;
}