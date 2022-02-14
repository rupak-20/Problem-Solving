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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        int l=1, r=1;
        if(root->left)
            l += minDepth(root->left);

        if(root->right)
            r += minDepth(root->right);
        
        if(l==1)
            return r;
        if(r==1)
            return l;
        
        return min(l,r);
    }
};