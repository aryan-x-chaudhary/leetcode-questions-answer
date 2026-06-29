class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int counter = 0, result=0;
        while (n) {
            int r = n % 2;
            result = result + (pow(2, counter) * !r);
            n = n / 2;
            counter++;
        }
        return result;
    }
};