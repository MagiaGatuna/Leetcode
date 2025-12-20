class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int result=0;
        for(int i=0; i<strs[0].length(); i++){
            string s = "";
            for(int j=0; j<strs.size(); j++){
                s+=strs[j][i];
            }
            string aux= s;
            sort(aux.begin(), aux.end());
            if(s!=aux) result++;
        }
        
        return result;    
    }
    
};