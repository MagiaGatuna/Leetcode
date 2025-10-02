class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        string n=to_string(num);
        for(int i=0; i<n.size();i++){
            sum+=n[i]-'0';
        }
        if(sum<=9) return sum;
        return addDigits(sum);
    }
};