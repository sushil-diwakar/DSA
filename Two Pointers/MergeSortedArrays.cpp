class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        for(int p=0;p<m; p++){
         temp.push_back(nums1[p]);
        }
        nums1.clear();
        int i=0,j=0;

         while(i<m&&j<n){
        if(temp[i]<nums2[j]){
            nums1.push_back(temp[i]);
            i++;
        }
        else{
            nums1.push_back(nums2[j]);
            j++;
        }
     }
     while(i<m){
        nums1.push_back(temp[i]);
        i++;
     }
     
     while(j<n){
         nums1.push_back(nums2[j]);
        j++;

     }
    }

};