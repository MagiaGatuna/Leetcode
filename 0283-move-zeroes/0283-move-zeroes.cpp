class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cont=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                cont++;
                i--;
            }
        }
        for(int i=0; i<cont; i++){
            nums.push_back(0);
        }
    }
};