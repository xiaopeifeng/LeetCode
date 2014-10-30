/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//solution for https://oj.leetcode.com/problems/same-tree
class Solution {
public:
        bool isSameTree(TreeNode *p, TreeNode *q) {
                if (p == q && p == NULL) return true;
                else if (p == NULL || q == NULL) return false;
                if (p->val != q->val) return false;
                return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
};