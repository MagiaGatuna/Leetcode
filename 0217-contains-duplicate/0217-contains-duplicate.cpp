class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int aux=nums.size();
       sort(nums.begin(), nums.end());
       auto last = std::unique(nums.begin(), nums.end());
       nums.erase(last, nums.end());
       if(aux>nums.size()) return true;
       return false;
    }
};