/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//solution for https://oj.leetcode.com/problems/balanced-binary-tree
class Solution {
public:
        bool isBalanced(TreeNode *root) {
                if (root == NULL) return true;
                else
                {
                        int l = height(root->left);
                        int r = height(root->right);
                        if (l - r >= 2 || l - r <= -2) return false;
                        return isBalanced(root->left) && isBalanced(root->right);
                }
        }
private:
        int height(TreeNode* root)
        {
                if (root == NULL) return 0;
                int lheight = height(root->left) + 1;
                int rheight = height(root->right) + 1;
                return lheight > rheight ? lheight : rheight;
        }
};