#include <iostream>
#include <vector>
using namespace std;

int main(){

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