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
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        queue<pair<TreeNode *, long long>> q;
        q.push({root, 0});

        int ans = 0;

        while (!q.empty())
        {
            int n = q.size();

            long long left = q.front().second;
            long long right = left;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front().first;
                long long index = q.front().second;
                q.pop();

                right = index;

                if (node->left)
                    q.push({node->left, 2 * index + 1});

                if (node->right)
                    q.push({node->right, 2 * index + 2});
            }

            ans = max(ans, (int)(right - left + 1));
        }

        return ans;
    }
};