class Solution {
public:
    vector<int> diStringMatch(string s) {

        int n=s.length();
        vector<int> ans;
        int low=0, i=0;
        int high=n;

        while(i<n){
            if(s[i]=='D'){
                ans.push_back(high);
                high--;
            }
            else{
                ans.push_back(low);
                low++;
            }
            i++;
        }

        ans.push_back(low);
        return ans;

        

    }
};