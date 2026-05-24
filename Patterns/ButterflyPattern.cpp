#include <iostream>
using namespace std;

int main(){


   int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Top
    for ( int i = 1 ; i <= n ; i++){

        for ( int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        //Spaces : (n*2 - 2*i)
        for ( int j = 1 ; j <= (n*2 - 2*i) ; j++){
            cout << " ";
        }
        for ( int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
    //Bottom

    for ( int i = 0 ; i < n ; i++){

        for ( int j = 1 ; j <= n - i ; j++){
            cout << "*";
        }
        //Spaces : (n*2 - 2*i)
        for ( int j = 1 ; j <= 2*i ; j++){
            cout << " ";
        }
        for ( int j = 1 ; j <= n - i ; j++){
            cout << "*";
        }
        cout << "\n";
    }


    return 0;

}