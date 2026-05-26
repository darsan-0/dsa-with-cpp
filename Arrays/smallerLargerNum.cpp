#include <iostream>
using namespace std;

int Smaller(int arr[],int size,int smaller){
    for (int i = 0; i < size; i++){
        smaller = min(smaller,arr[i]);
    }
    return smaller;
}

int Larger(int arr[],int size,int larger){
    for (int i = 0; i < size; i++){
        larger = max(larger,arr[i]);
    }
    return larger;
}
int main(){

    int smaller = INT_MAX;
    int larger = INT_MIN;

    int n;
    cout << "Enter the size of price array: ";
    cin >> n ;

    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Enter the array element : ";
        cin >> arr[i] ;
    }

    cout << "Smaller element in the give array: " << Smaller(arr,n,smaller) << endl;
    cout << "Larger element in the give array: " << Larger(arr,n,larger) << endl;

    return 0;
}