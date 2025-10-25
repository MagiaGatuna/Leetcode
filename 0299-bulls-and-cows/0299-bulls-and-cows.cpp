class Solution {
public:
    string getHint(string secret, string guess) {
        int A=0, B=0;
        string aux = secret;
        for(int i=0; i<secret.size();i++){
            if(secret[i]==guess[i]){
                A++;
                aux[i]='-';
            }
        }
        for(int i=0; i<secret.size();i++){
            if (secret[i] != guess[i]) {
                auto pos = aux.find(guess[i]);
                if(pos != string::npos){
                    B++;
                    aux[pos]='-';
                }
            }
        }

        return to_string(A) +"A" + to_string(B) + "B";
    }
};