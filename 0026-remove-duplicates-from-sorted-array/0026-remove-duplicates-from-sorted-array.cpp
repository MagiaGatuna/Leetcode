class Solution {
public:
    int removeDuplicates(vector<int>& nums){       auto u = unique(nums.begin(), nums.end());
    nums.erase(u, nums.end());
    return nums.size();

    }
};