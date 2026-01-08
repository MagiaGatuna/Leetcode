class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = accumulate(accounts[0].begin(), accounts[0].end(), 0);
        for (int i = 1; i < accounts.size(); i++) {
            int suma = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            if(suma>result) result = suma;
        }
       return result;
    }
};