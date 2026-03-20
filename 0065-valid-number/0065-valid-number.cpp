class Solution {
public:
    bool isNumber(string s) {
        regex pattern("[+-]?((\\d+\\.?\\d*)|\\.\\d+)([eE][+-]?\\d+)?");
        return regex_match(s, pattern);
    }
};