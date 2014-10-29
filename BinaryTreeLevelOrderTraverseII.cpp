/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
//solution for https://oj.leetcode.com/problems/binary-tree-level-order-traversal-ii
class Solution {
public:
        vector<vector<int> > levelOrderBottom(TreeNode *root) {
                dfs(root, 0);
                return vector<vector<int> >(res.rbegin(), res.rend());
        }
private:
        void dfs(TreeNode* root, int level)
        {
                if (!root) return;
                if (level == res.size())
                {
                        res.push_back(vector<int>());
                }
                res[level].push_back(root->val);
                dfs(root->left, level + 1);
                dfs(root->right, level + 1);
        }
private:
        vector<vector<int> > res;
};