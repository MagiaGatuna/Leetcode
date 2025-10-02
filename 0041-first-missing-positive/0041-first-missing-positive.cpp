class Solution {
public:
    
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto u=unique(nums.begin(), nums.end());
        if(nums[0]>1) return 1;
        if(nums.size()==1){
            if(nums[0]<1){
                return 1;
            }else{
                return nums[0]+1;
            }
        } 
        int cont=nums[0];
        bool uno=false;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==1) uno=true;
            if(cont<=0){
                cont=nums[i];
            }else if(!uno) return 1;
            if(cont!=nums[i]) return cont;
            cont++;
        }
        if(!uno) return 1;
        return cont++;
    }
};