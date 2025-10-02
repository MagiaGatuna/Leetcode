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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL){
            return result;
        }
        stack<TreeNode*> pila;
        TreeNode* nodoActual=root;
    
        while(nodoActual!=NULL||!pila.empty()){
            while(nodoActual!=NULL){
                pila.push(nodoActual);
                nodoActual=nodoActual->left;
            }
            
            nodoActual=pila.top();
            pila.pop();
            result.push_back(nodoActual->val);
            
            nodoActual=nodoActual->right;
        }
        return result;
    }
};