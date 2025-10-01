class Solution {
public:
    bool isValid(string s) {
        if(s.length()<=1||s[0]==')'||s[0]=='}'||s[0]==']')
            return false;
        stack<char> abrir;
        abrir.push(s[0]);
        for(int i =1; i<s.length(); i++){
            if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(abrir.empty()) return false;
                if(abrir.top()=='('&&s[i]!=')') return false;
                if(abrir.top()=='['&&s[i]!=']') return false;
                if(abrir.top()=='{'&&s[i]!='}') return false;
                abrir.pop();
            }else{
                abrir.push(s[i]);
            }
        } 
        if(!abrir.empty()) return false;
        return true;
    };
};