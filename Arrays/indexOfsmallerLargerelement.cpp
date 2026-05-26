#include <iostream>
using namespace std;

int MinEleIndex(int arr[],int size){
    int index = 0;
    int s = INT_MAX;
    for (int i = 0; i < size; i++){
        if (arr[i] < s){
            index = i;
            s = arr[i];
        }
    }
    return index;
}

int MaxEleIndex(int arr[],int size){
    int index = 0;
    int l = INT_MIN;
    for (int i = 0; i < size; i++){
        if (arr[i] > l){
            index = i;
            l = arr[i];
        }
    }
    return index;
}
int main(){

    int n;
    cout << "Enter the size of  array: ";
    cin >> n ;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Enter the array element : ";
        cin >> arr[i] ;
    }

    cout << "Smaller element Index in the give array: " << MinEleIndex(arr,n) << endl;
    cout << "Larger element Index in the give array: " << MaxEleIndex(arr,n) << endl;

    return 0;
}