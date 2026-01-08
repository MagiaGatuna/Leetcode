class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cambio[3] = {0,0,0};
        //sort(bills.begin(), bills.end());
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) cambio[0]++;
            if(bills[i]==10){
               cambio[1]++; 
               if(cambio[0]>0){
                cambio[0]--;
               }else{
                return false;
               } 
            } 
            if(bills[i]==20){
                cambio[2]++; 
               if(cambio[0]>0&&cambio[1]>0){
                cambio[0]--;
                cambio[1]--;
               }else if(cambio[0]>2){
                cambio[0]=cambio[0]-3;
               }else{
                return false;
               }
            } 
        }
        return true;
    }
};