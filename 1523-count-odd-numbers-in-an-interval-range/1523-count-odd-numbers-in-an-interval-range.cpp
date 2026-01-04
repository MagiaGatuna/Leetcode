class Solution {
public:
    int countOdds(int low, int high) {
        int result=high-low;
        if(high%2!=0) result++;
        if(low%2!=0) result++;
        return result/2;
    }
};