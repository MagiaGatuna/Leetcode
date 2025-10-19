class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        for(; i<nums.size(); i++){
            if(nums[i]!=i) return i;
        }
        return i;
    }
};