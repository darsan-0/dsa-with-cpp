#include <iostream>
using namespace std;

int main(){

    int arr[7] = {4, 2, 7, 8, 1, 2, 5};
    int left = 0;
    int right = 6;

    while (left < right){
        swap(arr[left], arr[right]); 
        left++;
        right--;
    }

    for (int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
