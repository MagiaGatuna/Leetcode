class Solution {
public:
    int arrangeCoins(int n) {
        return (-1 + ( unsigned long long int) sqrt (1 + 8 * ( double )n)) / 2;
    }
};