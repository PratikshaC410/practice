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
    int sum_path(TreeNode *root, int &max_sum)
    {
        if (root == NULL)
        {
            return 0;
        }
        int left_sum = max(0, sum_path(root->left, max_sum));
        int right_sum = max(0, sum_path(root->right, max_sum));
        int curr_sum = left_sum + right_sum + root->val;
        max_sum = max(max_sum, curr_sum);
        return root->val + max(left_sum, right_sum);
    }

public:
    int maxPathSum(TreeNode *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int max_sum = INT_MIN;
        sum_path(root, max_sum);
        return max_sum;
    }
};