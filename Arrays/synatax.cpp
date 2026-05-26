#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of price array: ";
    cin >> n ;

    int marks[5] = {99,89,87,67,12}; // Arrays Syntax.
    double price[n] = {99.9,89.9,10.34};
    marks[4] = 98;
    cout << marks[0] << endl ;
    cout << marks[1] << endl ;
    cout << marks[2] << endl ;
    cout << marks[3] << endl ;
    cout << marks[4] << endl ;
    cout << "_______________________"<< endl;
    for (int i = 0; i < 5; i++){
        cout << marks[i] << endl;
    }
    cout << "_______________________"<< endl;
    cout << "_______________________"<< endl;
    
    for (int i = 0; i < n; i++){
        cout << "Enter the array element : ";
        cin >> price[i] ;
    }
    for (int i = 0; i < n; i++){
        cout << price[i] << endl;
    }

    return 0;
}