class Solution {
public:
    bool isPowerOfTwo(int n) {
        double entero;
        double decimal = modf(log2(n), &entero);
        if(decimal==0&&n>0) return true;
        return false;
    }
};