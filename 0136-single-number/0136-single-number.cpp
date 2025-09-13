class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N=nums.size();
        bool Repetido=false;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(i==j) continue;
                if(nums[i]==nums[j]){
                   Repetido=true;
                   break; 
                } 
                
            }
            if(!Repetido) return nums[i];
            Repetido=false;
        }
        return 0;
    }
};