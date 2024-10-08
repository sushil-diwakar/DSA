class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boat=0;
        int start=0;
        int end=people.size()-1;

       while(start<=end){
            
                if(people[start]+people[end]<=limit)
                {
                    start++;
                    end--;
                }   
                else{
                    end--;
                }
                boat++; 
            }

        return boat;
    }
};