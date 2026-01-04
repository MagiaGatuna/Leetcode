class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        salary.erase(salary.begin());
        salary.pop_back();
        double result = accumulate(salary.begin(), salary.end(), 0);
        return result/salary.size();
    }
};