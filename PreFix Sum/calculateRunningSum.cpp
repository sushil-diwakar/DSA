#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        ans[0]=nums[0];
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] + nums[i];
        }

        return ans;
}

int main(){

    vector<int> nums = {1,2,3,4};
    vector<int> ans(nums.size(), 0);

    ans = runningSum(nums);

    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}