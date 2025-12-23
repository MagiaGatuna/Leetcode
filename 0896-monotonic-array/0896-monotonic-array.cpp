class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int> aux1=nums;
        vector<int> aux2=nums;
        sort(aux1.begin(), aux1.end());
        sort(aux2.rbegin(), aux2.rend());
        if(nums==aux1|| nums==aux2) return true;
        return false;
    }
};