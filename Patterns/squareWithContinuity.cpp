#include <iostream>
using namespace std;

int main(){
    int count = 1 ;
    int n ;
    cout << "Enter n value: ";
    cin >> n ;

    for ( int i =0 ; i < n ; i++){

        for (int j = 0 ; j < n ; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}



// for (int j = 1 ; j <= n*n ; j++ ){
//         cout << j << " " ;
//         count ++;
//         if (count %n == 0){
//             cout << endl;
//         }
//     }