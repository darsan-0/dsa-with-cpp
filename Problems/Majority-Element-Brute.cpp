#include <iostream>
#include <vector>
using namespace std;

// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times.
// You may assume that the majority element always exists in the array.
int majorityEle(vector <int> vec){
    int n = vec.size();
    for(int i = 0; i < n; i++){
        int frequency = 0;
        for (int j = 0; j < n; j++){
            if (vec[i] == vec[j]){
                frequency++;
            }if(frequency > n/2){
                return vec[i];
            }
        }
    }  
    return -1;  
}

int main(){
    vector <int> vec = {1,2,2,1,1};
    int res = majorityEle(vec);
    cout << res ;
    return 0;
}