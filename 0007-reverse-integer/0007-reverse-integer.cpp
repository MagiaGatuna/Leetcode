#include <limits>
class Solution {
public:
    int reverse(int x) {
        const int INT_MAX_VALUE = std::numeric_limits<int>::max();
        const int INT_MIN_VALUE = std::numeric_limits<int>::min();
        int aux=0;
        if(x>=INT_MIN_VALUE&&x<=INT_MAX_VALUE){
           while(x!=0){
            if(aux<INT_MIN_VALUE/10||aux>INT_MAX_VALUE/10) return 0;
            aux=aux*10 + x%10;
            x/=10;
            }
            return aux; 
        }else{
            return 0;
        }
        
    }
};