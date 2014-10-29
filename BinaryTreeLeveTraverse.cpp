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
        vector<vector<int> > levelOrder(TreeNode *root) {
                dfs(root, 0);
                return res;
        }
private:
        void dfs(TreeNode* root, int level)
        {
                if (!root) return;
                if (res.size() == level)
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