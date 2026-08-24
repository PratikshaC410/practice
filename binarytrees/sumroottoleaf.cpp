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
class Solution
{
private:
    int dfs_traversal(TreeNode *root_n, int curr_sum)
    {
        if (!root_n)
        {
            return 0;
        }
        curr_sum = curr_sum * 10 + root_n->val;
        if (!root_n->left && !root_n->right)
        {
            return curr_sum;
        }
        return dfs_traversal(root_n->left, curr_sum) + dfs_traversal(root_n->right, curr_sum);
    }

public:
    int sumNumbers(TreeNode *root)
    {
        return dfs_traversal(root, 0);
    }
};