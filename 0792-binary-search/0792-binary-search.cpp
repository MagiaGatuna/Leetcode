class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto l = lower_bound(nums.begin(), nums.end(), target);
        int i = distance(nums.begin(), l);
        if(i>=nums.size()||nums[i]!=target) return -1;
        return i;
    }
};