#include <iostream>
using namespace std;

int LinearSearch(int arr[],int target){
    for (int i = 0; i < 7; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    
    int arr[7] = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;

    if(LinearSearch(arr,target) != -1){
        cout << "The target element " << target << " found at index " << LinearSearch(arr,target) ;
    }
    else{
        cout << "The target element " << target << " not found." ;
    }

    return 0;
}