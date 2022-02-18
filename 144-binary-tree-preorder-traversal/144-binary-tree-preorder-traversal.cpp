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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;

        stack<TreeNode*> q;
        q.push(root);
        TreeNode *itr;
        
        while(!q.empty()) {
            itr = q.top();
            q.pop();
            res.push_back(itr->val);
            if(itr->right)
                q.push(itr->right);
            if(itr->left)
                q.push(itr->left);

        }
        
        return res;
    }
};