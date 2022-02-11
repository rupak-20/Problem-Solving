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
   int heightDiff(struct TreeNode* root) {
    if (!root) 
        return 0;
       
    int l = heightDiff(root->left), r = heightDiff(root->right);
    if (l == -1 || r == -1 || l-r < -1 || l-r > 1) return -1;
        return (l>r?l:r) + 1;
    }

    bool isBalanced(struct TreeNode* root) {
        return heightDiff(root) >= 0;
    }
};