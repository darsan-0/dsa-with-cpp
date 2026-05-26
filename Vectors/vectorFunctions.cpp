#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "Size = "<< vec.size() << endl; // size() --> This function returns the size of the vector.
    vec.push_back('f'); //push_back() --> This function is used to add an element at end of the vector.
    vec.push_back('g');
    vec.push_back('h');
    cout << "Size after push_back() = "<< vec.size() << endl;
    vec.pop_back(); //pop_back() --> This function is used to Delete an element at end of the vector.
    cout << "Size after pop_back() = "<< vec.size() << endl;

    cout << "Front val = " << vec.front() << endl; // front() --> This function is used to return the front value 
    cout <<"Back val = " << vec.back() << endl; // back() --> This function is used to return the front value
    
    cout << "The element at index 3 : " << vec.at(3) << endl; // at(i) --> This function is used to find the element at i'th index.
    for ( char val : vec){ //for each loop
        cout << val << " ";
    }
    return 0;
}