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
    TreeNode* res(vector<int>& nums, int begin, int end) {
        return begin >= end ? NULL : new TreeNode(nums[(begin + end) / 2], res(nums, begin, (begin + end) / 2), res(nums, (begin + end) / 2 + 1, end));
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return res(nums, 0, nums.size());
    }
};