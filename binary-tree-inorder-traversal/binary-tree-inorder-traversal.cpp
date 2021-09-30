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
        stack<TreeNode*> s;
        if(!root)
            return result;
        while(true)
        {
            if(root)
            {
                s.push(root);
                root = root->left;
            }
            else
            {
                if(s.empty()==true)
                    break;
                root=s.top();
                s.pop();
                result.push_back(root->val);
                root = root->right;
            }
        }
        return result;
    }
};