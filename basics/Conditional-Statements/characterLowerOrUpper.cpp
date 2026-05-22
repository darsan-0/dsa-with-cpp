// Find character lowercase or uppercase

#include <iostream>
using namespace std;

int main(){

    char ch ;
    cout << "Enter any character :";
    cin >> ch ;
    if (ch  >= 'a' && ch <= 'z'){
        cout << ch << " is Lower-case." ;
    }else if(ch  >= 'A' && ch <= 'Z'){
        cout << ch << " is Upper-case." ;
    }else{
        cout << "The give input is not a character." ;
    }

    return 0;
}