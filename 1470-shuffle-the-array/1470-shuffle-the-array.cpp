class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> result;
       for(int i=0, j=n; i<n; i++, j++){
        result.push_back(nums[i]);
        result.push_back(nums[j]);
       }
       return result;
    }
};