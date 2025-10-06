class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> result;
        for(int i=0, j=0;i<operations.size();i++){
            if(operations[i]=="+"){
                result.push_back(result[j-1]+result[j-2]);
                j++;
            }else{if(operations[i]=="D"){
                result.push_back(result[j-1]*2);
                j++;
            }else{ if(operations[i]=="C"){
                result.pop_back();
                j--;
            }else{
                   result.push_back(stoi(operations[i])); 
                j++;
            }}}
        }
        int suma = accumulate(result.begin(), result.end(), 0);
        return suma;
    }
};