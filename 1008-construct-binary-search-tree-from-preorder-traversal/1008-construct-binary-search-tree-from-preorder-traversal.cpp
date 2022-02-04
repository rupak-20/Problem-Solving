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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        if(!n) return NULL;
        
        stack<TreeNode*> s;
        TreeNode* root = new TreeNode(preorder[0]);
        s.push(root);
        
        for(int i=1;i<n;i++) {
             if(preorder[i]>s.top()->val) {
                 TreeNode* n = new TreeNode(preorder[i]);
                 TreeNode* temp;
                 
                 while(!s.empty() && preorder[i]>s.top()->val){
                     temp = s.top();
                     s.pop();
                 }
                 
                 temp->right = n;
                 s.push(n);
             }
            
            else {
                 TreeNode* n = new TreeNode(preorder[i]);
                 s.top()->left = n;
                 s.push(n);
             }
        }
        
        return root;
    }
};