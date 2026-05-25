#include <iostream>
using namespace std;

//Function declaration.
void printHello(){
    cout << "Hello!\n";
}
int num(){
    cout << "Now we will return something.\n";
    return 4;
}
int main(){
    
    //Function call / invoke.
    printHello();
    int val = num();
    cout << "Val = " << val <<endl;
    // OR
    cout << num();
    return 0;
}