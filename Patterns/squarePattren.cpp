#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n value: ";
    cin >> n;
    for ( int i = 1 ; i <= n ; i++ ){
        for ( char j = 'A' ; j <= 'D' ; j++ ){
            cout << j << " " ; ;
        }
        cout << endl;
    }

    return 0;
}