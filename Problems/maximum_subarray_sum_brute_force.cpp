#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {3,-4,5,4,-1,7,-8};
    int n = vec.size();
    int sum = INT_MIN;
    for(int st = 0; st < n; st++ ){
        int res = 0;
        for(int end = st; end < n; end++){
            res += vec[end];
            sum = max(sum,res);
        }
    }
    cout <<"Maximum subarray sum = " << sum;

    return 0;
}