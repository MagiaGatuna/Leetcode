class Solution {
public:
    string reverseVowels(string s) {
        string vocales="";
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117){
                vocales+=s[i];
            }
        }

        for(int i=0; i<s.length(); i++){
            if(s[i]==65||s[i]==69||s[i]==73||s[i]==79||s[i]==85||s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117){
                s[i]=vocales[0];
                vocales.erase(0, 1);
            }
        }
        return s;
    }
};