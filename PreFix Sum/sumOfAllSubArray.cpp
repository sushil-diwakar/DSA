#include <bits/stdc++.h>
using namespace std;

//Preparing Pre-Fix sum array
vector<int> computePrefixSum(vector<int>& nums) {
    int n = nums.size();
    int sum;
    vector<int> prefixSum(n, 0);
    prefixSum[0] = nums[0];
    for(int i=1; i<n; i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }
    return prefixSum;
}

//Computing all the subarrays and summing them
long long sumOfAllSubArray(vector<int>& arr){
    int size= arr.size();
    vector<int> prefixSum = computePrefixSum(arr);
    long long totalSum = 0;
    for(int start=0; start<size; start++){
        for(int end=start; end<size; end++){
            long long subArraySum = prefixSum[end];
            if(start>0){
                subArraySum-=prefixSum[start-1];
            }
            totalSum+=subArraySum;
        }
    }
    
    return totalSum;
}

int main() {
    
    vector<int> original = {1, 2, 3, 4};
    int ans = sumOfAllSubArray(original);
    
    cout<<"Sum is: "<<ans;
    return 0;
}