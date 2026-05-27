#include <iostream>
#include <vector>
using namespace std;

int main(){

//     Choice 1: Extend the maximum sum subarray ending at the previous element by adding the current element to it. If the maximum subarray sum ending at the previous index is positive, then it is always better to extend the subarray.

// Choice 2: Start a new subarray starting from the current element. If the maximum subarray sum ending at the previous index is negative, it is always better to start a new subarray from the current element.

    vector <int> vec = {3,-4,5,4-1,7,-8};
    int n = vec.size();
    int maxsum = INT_MIN;
    int currsum = 0;
    for ( int i = 0; i <= n - 1; i++){
        currsum += vec[i];
        maxsum = max(maxsum,currsum);
        if (currsum < 0){
            currsum = 0;
        }
    }

    cout << maxsum;

    return 0;
}