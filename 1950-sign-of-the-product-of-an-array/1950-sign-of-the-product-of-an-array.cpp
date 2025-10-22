class Solution {
public:
    int arraySign(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cont=0;
        for(int i=0; i<nums.size()&&nums[i]<1; i++){
                if(nums[i]==0){
                        return 0;
                }else{
                        cont++;
                }
        }
        if(cont%2==0){
                return 1;
        }else{
                return -1;
        }
    }
};