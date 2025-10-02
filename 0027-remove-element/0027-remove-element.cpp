class Solution {
public:
    void OrdenamientoBurbuja(vector<int>& nums, int tam) {
        for (int i = 0; i < tam - 1; i++) {
            for (int j = 0; j < tam - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
    }
    int removeElement(vector<int>& nums, int val) {
        int cont=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==val){
                nums[i]=INT_MAX;
            }else{
                cont++;
            }
        }
        OrdenamientoBurbuja(nums, nums.size());
        return cont;
    }
};