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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        if(root==NULL) {
            return result;
        }

        stack<TreeNode*> pila1; 
        stack<TreeNode*> pila2; 
        pila1.push(root);
        

        while(!pila1.empty()){
            TreeNode* nodoActual=pila1.top();
            pila1.pop();
            pila2.push(nodoActual); 
            
            if (nodoActual->left!=NULL){
                pila1.push(nodoActual->left);
            }
            if (nodoActual->right!=NULL){
                pila1.push(nodoActual->right);
            }
        }
        

        while(!pila2.empty()){
            TreeNode* nodoActual=pila2.top();
            pila2.pop();
            result.push_back(nodoActual->val);
        }
        return result;
    }
};