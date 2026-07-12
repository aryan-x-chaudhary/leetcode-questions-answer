class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int i;

        int max = 0;
        for(i=0;i<candies.size();i++){
            if(candies[i] > max){
                max = candies[i];
            }
        }

        int res;
        
            for(i=0;i<candies.size();i++){
                res = candies[i] + extraCandies;
                if(max <= res){
                    ans.push_back(true);
                }
                else{
                    ans.push_back(false);
                }
        }
        return ans;
    }
};