//solution for problem https://oj.leetcode.com/problems/minimum-depth-of-binary-tree

/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
        int minDepth(TreeNode *root) {
                if (root == NULL) return 0;
                if (root->left == NULL && root->right != NULL)
                        return minDepth(root->right) + 1;
                else if (root->left != NULL && root->right == NULL)
                        return minDepth(root->left) + 1;
                else
                {
                        int lchild_depth = minDepth(root->left) + 1;
                        int rchild_depth = minDepth(root->right) + 1;
                        return lchild_depth < rchild_depth ? lchild_depth : rchild_depth;
                }
        }
};