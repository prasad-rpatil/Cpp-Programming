// Leetcode 136
#include <iostream>
#include <vector>
using namespace std;

int uniqueNum(vector<int> &nums){
    int ans = 0;
    for(int val : nums){
        ans ^= val;
    }
    return ans;
}

int main(){
    vector<int> vec = {4, 1, 2, 1, 2, 4, 5};

    int result = uniqueNum(vec);

    cout << result << endl;
    return 0;
}