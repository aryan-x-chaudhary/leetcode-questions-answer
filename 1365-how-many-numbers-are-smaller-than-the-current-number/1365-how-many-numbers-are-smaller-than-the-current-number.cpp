class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i, j, count;
    vector<int> ans;
    for(i=0; i<nums.size(); i++) {
        count = 0;
        for (j = 0; j < nums.size(); j++) {
            if (j != i && nums[j] < nums[i]) {
                count++;
            }
        }
        ans.push_back(count);
    }
    return ans;
    }
};