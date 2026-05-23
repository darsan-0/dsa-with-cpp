#include <iostream>
using namespace std;

int main(){

    int num ;
    cout << "Enter the num values: " ;
    cin >> num ;

    for ( int i = 1 ; i <= num ; i++){

        //Spaces.
        for (int j =0 ; j <= i ; j++){
            cout << " ";
        }

        //numbers
        
        for (int j =0 ; j <= num - i ; j++){
            cout << i;
        }
        cout << "\n" ;
    }


    return 0;
}


