class Solution {
public:
    int scoreOfString(string s) {
        vector<int> nums;
        int sum=0;
        for(int i=1; s[i]!='\0';i++){
            sum+=abs(s[i-1]-s[i]);
        }
       
        return sum;
    }
};