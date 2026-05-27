#include <iostream>
#include <vector>
using namespace std;

int main(){
    //When all elemts are filled with in the capacity the vectors will double the capaciy of actual one.
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << vec.size() << endl; //3
    cout << vec.capacity() << endl; //4
    return 0;
}