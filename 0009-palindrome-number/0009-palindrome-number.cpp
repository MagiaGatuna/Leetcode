class Solution {
public:
    bool isPalindrome(int x) {
        long aux1=x, aux2=0;
        if(x<0) return false;
        while(aux1!=0){
            aux2=aux2*10 + (aux1%10);
            aux1/=10;
        }
        if(aux2==x) return true;
        return false;
    }
};