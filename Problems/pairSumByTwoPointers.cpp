#include <iostream>
#include <vector>
using namespace std;

vector <int> pairSum(vector <int> vec,int target){

    int ps = 0;
    int n = vec.size() - 1;
    int i = 0;
    int j = n - 1;
    vector <int> ans;
    while (i < j){
        ps = vec[i] + vec[j];
        if(ps == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if (ps > target){
            j--;
        }else if (ps < target){
            i++;
        }
    }
    return ans;
}

int main(){

    vector <int> vec = { 2,7,11,15};
    int target = 18;
    vector <int> ans = pairSum(vec , target);
    cout << ans[0] << "," << ans[1];
    return 0;
}