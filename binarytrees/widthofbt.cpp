#include <iostream>
class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        queue<pair<TreeNode *, unsigned long long>> q;
        q.push({root, 0});

        int ans = 0;

        while (!q.empty())
        {
            int n = q.size();

            unsigned long long start = q.front().second;

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front().first;
                unsigned long long index = q.front().second - start;
                q.pop();

                if (i == n - 1)
                    ans = max(ans, (int)(index + 1));

                if (node->left)
                    q.push({node->left, 2 * index});

                if (node->right)
                    q.push({node->right, 2 * index + 1});
            }
        }

        return ans;
    }
};