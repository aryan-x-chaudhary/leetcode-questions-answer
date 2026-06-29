class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        bool found = false;

        while (count < 31) {
            if (pow(2, count) == n) {
                return true;
            }
            count++;
        }
        return false;
    }
  
};