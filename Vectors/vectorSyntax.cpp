#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> vec1; //Initially Size is 0, Because there no Zeros.
    cout << vec1.size() << endl;

    vector <int> vec2 = {1, 2, 3}; //It is with size 3.
    for(int i:vec2){
        cout << i << endl;
    }

    vector <int> vec3(3,0); //Here 3 is the SIZE fo the vector , Then Zeros will be filled in all the 3 indexs.
    for(int i:vec3){
        cout << i << endl;
    }

    return 0;
}