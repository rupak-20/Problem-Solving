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
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p && q)
        {
            if(p->val != q->val)
                return false;
            else
            {
                bool ans1 = isSameTree(p->left, q->left);
                bool ans2 = isSameTree(p->right, q->right);
                if(!(ans1 && ans2)) 
                    return false;
            }
        }
        else if( (p != 0) ^ (q != 0)) 
            return false;
        
        return true;
    }
};