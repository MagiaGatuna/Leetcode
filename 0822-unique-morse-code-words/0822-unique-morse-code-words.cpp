class Solution {
public:
    unordered_map<char, string> claveMorse={
            {'a', ".-"},
            {'b', "-..."},
            {'c', "-.-."},
            {'d', "-.."},
            {'e', "."},
            {'f', "..-."},
            {'g', "--."},
            {'h', "...."},
            {'i', ".."},
            {'j', ".---"},
            {'k', "-.-"},
            {'l', ".-.."},
            {'m', "--"},
            {'n', "-."},
            {'o', "---"},
            {'p', ".--."},
            {'q', "--.-"},
            {'r', ".-."}, 
            {'s', "..."}, 
            {'t', "-"},    
            {'u', "..-"},  
            {'v', "...-"},
            {'w', ".--"},  
            {'x', "-..-"},
            {'y', "-.--"}, 
            {'z', "--.."}  
        };
    string morse(string s){
        string result="";
        for(int i=0; i<s.size(); i++){
            result+=claveMorse[s[i]];
        }
        return result;
    }

    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> transformaciones;
        if(words.size()==1) return 1;
        for(int i=0; i<words.size(); i++){
            transformaciones.insert(morse(words[i]));
        }
        return transformaciones.size();
    }
};