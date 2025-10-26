class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> letras;
        int result=0;
        for(char i : stones){
            letras[i]++;
        }
        for(char i : jewels){
            result+=letras[i];
        }
        return result;
    }
};