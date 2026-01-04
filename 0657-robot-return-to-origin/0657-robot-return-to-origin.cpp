class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0, y=0;
        for(int i=0; i<moves.length();i++){
            if(moves[i]=='R'){
                x++;
            }
            if(moves[i]=='L'){
                x--;
            }
            if(moves[i]=='U'){
                y++;
            }
            if(moves[i]=='D'){
                y--;
            }
        }
        if(x==0 && y==0) return true;
        return false;
    }
};