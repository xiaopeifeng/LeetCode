/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/

// solution for https://oj.leetcode.com/problems/maximum-depth-of-binary-tree
class Solution {
public:
        int maxDepth(TreeNode *root) {
                if (!root) return 0;
                int l = maxDepth(root->left);
                int r = maxDepth(root->right);
                return l < r ? (r + 1) : (l + 1);
        }
};