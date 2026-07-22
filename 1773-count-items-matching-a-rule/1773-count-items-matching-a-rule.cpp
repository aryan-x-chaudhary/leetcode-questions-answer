class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
    int i,j, index;
    int count = 0;
    if(ruleKey == "type"){
        index = 0;
    }
    else if(ruleKey == "color"){
        index = 1;
    }
    else{
        index = 2;
    }
    for(i=0; i<items.size(); i++)
    {
        if(items[i][index] == ruleValue)
        {
            count++;
        }
    }
    index++;
    return count;
    }
};