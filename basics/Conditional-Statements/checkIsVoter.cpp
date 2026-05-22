#include <iostream>
using namespace std;

int main(){

    int age;
    cout << "Enter your age:";
    cin >> age;

    if (age < 18){
        cout<< "You're not eligible to vote!.";
    }else{
        cout << "You're eligible to vote!.";
    }

    return 0;
}