#include <iostream>
#include <vector>
using namespace std;
// The Boyer-Moore Majority Voting Algorithm is a highly efficient algorithm used to 
// find the "majority element" in an array (an element that appears strictly more than \(\frac{N}{2}\) times).
// It achieves this in a single pass with linear time \(O(N)\) and constant space \(O(1)\).
// The algorithm works by treating array elements as "votes" for candidates. It is divided into two main phases:
int main(){

    vector <int> nums = { 1,2,2,1,1,1};
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i< n; i++){
        if(freq == 0 ){
            ans = nums[i];
        }if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout << ans;
}