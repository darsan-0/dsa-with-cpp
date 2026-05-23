#include <iostream>
using namespace std;

int main(){

    int num ;
    cout << "Enter the num values: " ;
    cin >> num ;

    for ( int i = 1 ; i <= num ; i++){

        for (int j=num; j >= i ; j--){

            cout << i << " " ;
        }
        cout << "\n" ;
    }


    return 0;
}