class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
      int numE=numBottles, sum=0;
      while(numE>=numExchange){
        int Aux=numE-(numE/numExchange)*numExchange;
        numE=numE/numExchange;
        sum+=numE;
        numE+=Aux;
      }
      return numBottles + sum; 
    }
};