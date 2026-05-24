#include <iostream>
using namespace std;


int main(){

    int num ;
    cout << "Enter the num values: " ;
    cin >> num ;

    for ( int i = 0 ; i < num ; i++){

        //Spaces. n-i-1
        for (int j =0 ; j <= num - i - 1 ; j++){
            cout << " ";
        }

        //numbers : i+1
        
        for (int j =1 ; j <= i + 1  ; j++){
            cout << j;
        }
        for (int j = i ; j >  0 ; j--){
            cout << j;
        }

        cout << "\n" ;
    }


    return 0;
}