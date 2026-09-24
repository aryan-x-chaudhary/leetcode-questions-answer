class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i;
        int curr_alt = 0;
        int high_alt = 0;
        
        for(i=0;i<gain.size();i++){
            curr_alt = curr_alt + gain[i];

            if(high_alt < curr_alt){
                high_alt = curr_alt;
            }
        }
        return high_alt;

    }
};