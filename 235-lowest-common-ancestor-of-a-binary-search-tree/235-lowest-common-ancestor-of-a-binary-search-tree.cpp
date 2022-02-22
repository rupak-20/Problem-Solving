/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return root;
        
        //if both p and q are greater than root then the lcm will be on the right subtree of root node
        if(p->val > root->val && q->val > root->val)
            return lowestCommonAncestor(root->right, p, q);
        
        //if both p and q are smaller than root then the lcm will be on the left subtree of root node
        if(p->val < root->val && q->val < root->val)
            return lowestCommonAncestor(root->left, p, q);
        
        return root;    //else root is the lcm
    }
};