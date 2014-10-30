/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//solution for https://oj.leetcode.com/problems/symmetric-tree
class Solution {
public:
        bool isSymmetric(TreeNode *root) {
                if (!root) return true;
                return compareNode(root->left, root->right);
        }
        bool compareNode(TreeNode *node1, TreeNode *node2)
        {
                if (node1 == node2 && node1 == NULL) return true;
                else if (node1 == NULL || node2 == NULL) return false;
                if (node1->val != node2->val) return false;
                return compareNode(node1->left, node2->right) && compareNode(node1->right, node2->left);
        }
};