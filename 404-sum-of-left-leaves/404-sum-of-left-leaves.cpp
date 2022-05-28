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
    int sumOfLeftLeaves(TreeNode* root) {
        int res = 0;
        stack<TreeNode*> s;
        TreeNode* itr;
        
        s.push(root);
        while(!s.empty()) {
            itr = s.top();
            s.pop();
            if(itr->left) {
                if(!(itr->left)->left && !(itr->left)->right)
                    res += itr->left->val;
                else
                    s.push(itr->left);
            }
            
            if(itr->right) {
                s.push(itr->right);
            }
        }
        
        return res;
    }
};