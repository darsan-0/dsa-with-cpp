#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {6,7,3,1};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++) {
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
            }
        }
    }
    return 0;
}
