/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void RecorridoDFS_PreOrden(TreeNode* nodo, vector<int>& vector){
        if(nodo==NULL){
            vector.push_back(INT32_MIN);
            return;
        }
        vector.push_back(nodo->val); 
        RecorridoDFS_PreOrden(nodo->left, vector); 
        RecorridoDFS_PreOrden(nodo->right, vector); 
    }

    bool isSameTree(TreeNode* p, TreeNode* q){
        vector<int> vector1, vector2;
        RecorridoDFS_PreOrden(p, vector1);
        RecorridoDFS_PreOrden(q, vector2);

        if(vector1.size()!=vector2.size()) return false;
        for(int i=0;i<vector1.size(); i++){
            if(vector1[i]!=vector2[i]) return false;
        }
        return true;
    }
};