class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        for( ;i<nums.size()-1&&nums[i]<=target;i++){
            if(nums[i]==target) return i;
        }
        if(nums[i]<target) return i+1;
        else return i;
        
    }
};