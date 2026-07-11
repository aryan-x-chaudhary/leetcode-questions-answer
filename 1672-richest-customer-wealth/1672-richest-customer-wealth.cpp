class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int cust_wealth = 0;
        int i, j;
        
        for(i=0;i<accounts.size();i++){
            cust_wealth = 0;
            for(j=0; j<accounts[i].size(); j++){
                cust_wealth = cust_wealth + accounts[i][j];
            }
            if(cust_wealth>max_wealth)
                max_wealth = cust_wealth;   
        }
            return max_wealth;
        }
};