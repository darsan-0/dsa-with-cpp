#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> vec = { 1,2,2,1,1,1};
    #include <algorithm> // Required header
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 1;
        int n = nums.size();
        
        // Edge case: single element arrays
        if (n == 1) return nums[0];
        
        sort(nums.begin(), nums.end());
        int ans = nums[0];

        for(int i = 1; i < n; i++){
            if (nums[i] == nums[i-1]){
                freq++;
                ans = nums[i]; // <-- FIXED: Keep track of the current matched element
            } else {
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2){
                return ans;
            }
        }
        return ans;
    }
};

}