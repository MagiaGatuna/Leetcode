class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> aux(s.size());
        for(int i=s.size()-1, j=0; i>=0; i--, j++){
            aux[j]=s[i];
        }
        for(int i=0; i<=s.size()-1; i++){
            s[i]=aux[i];
        }
    }
};