class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> pairs(spells.size(), 0);
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            auto j = lower_bound(potions.begin(), potions.end(), (long long)((success + spells[i] - 1) / spells[i]));
            int count = distance(j, potions.end());
            pairs[i] = count;
        }
        return pairs;
    }
};