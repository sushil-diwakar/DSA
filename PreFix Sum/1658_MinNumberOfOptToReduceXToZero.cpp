class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int size = nums.size();
        int totalSum=0;
        int minOpt = INT_MAX;
        for(int i=0; i<size; i++){
            totalSum+=nums[i];
        }
        int targetSum = totalSum-k;
        if(targetSum<0){
            return -1;
        }
        if(targetSum==0){
            return size;
        }

        int currSum=0;
        int leftIndex=0, rightIndex=0;

        while(rightIndex<size){
            currSum+=nums[rightIndex];
            rightIndex++;

            while(currSum>targetSum && leftIndex<size){
                currSum-=nums[leftIndex];
                leftIndex++;
            }

            if(currSum==targetSum)
                minOpt = min(minOpt, size-(rightIndex-leftIndex));
        }
        
        return (minOpt==INT_MAX)?-1:minOpt;

    }
};