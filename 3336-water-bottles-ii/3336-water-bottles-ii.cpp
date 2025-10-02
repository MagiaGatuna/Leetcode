class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int full=numBottles, Empty=0, result=0;
        result+=full;
        Empty+=full;
        full=0;
        while(Empty>=numExchange){
            Empty-=numExchange;
            full++;
            numExchange++;
            result+=full;
            Empty+=full;
            full=0;
        }
        return result+full;
    }
};