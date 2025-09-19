class Solution {
public:
    int lengthOfLastWord(string s) {
        int cont=0;
            while(s[s.length()-1]==' '){
                s.pop_back();
            }
            
            for(int i=s.length() - 1; i>=0&&s[i]!=' '; i--){
                  cont++;  
            }
        return cont;
    }
};