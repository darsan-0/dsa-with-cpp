#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = { 2,7,11,15};
    vector <int> ans;
    int n = vec.size();
    int target = 18;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(vec[i]+vec[j] == target ){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    
    for ( int val:ans){
        cout << val << " ";
    }

    return 0;
}