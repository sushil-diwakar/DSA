class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score=0;
        int start=0;
        int end = tokens.size()-1;
        sort(tokens.begin(), tokens.end());
        
        while(start<end){
            if(score==0 && tokens[start]<power){
                //face-up
                score++;
                power-=tokens[start];
                start++;
            }
            else if(tokens[start]<=power){
                //face-up
                score++;
                power-=tokens[start];
                start++;
            }
            else if(score>0){
                //Face down with atleast power 1
                score--;
                power+=tokens[end];
                end--;
            }
            else{
                start++;
            }
        }
            if(start==end){
                if(tokens[start]<=power){
                    score++;
                }
            }
        return score;
    }
};