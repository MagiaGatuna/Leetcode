class Solution {
public:
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> matriz;
        
        int inicio = intervals[0][0];
        int fin = intervals[0][1];

        for (size_t i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= fin) {
                fin = max(fin, intervals[i][1]);
            } else {
                matriz.push_back({inicio, fin});
                inicio = intervals[i][0];
                fin = intervals[i][1];
            }
        }
        
        matriz.push_back({inicio, fin});

    return matriz;
}
};