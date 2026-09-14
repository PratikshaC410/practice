#include <iostream>
using namespace std;
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
    void dfs(TreeNode *node, int depth, vector<int> &result)
    {
        if (!node)
            return;

        if (depth == result.size())
        {
            result.push_back(node->val);
        }
        else
        {
            result[depth] = max(result[depth], node->val);
        }

        dfs(node->left, depth + 1, result);
        dfs(node->right, depth + 1, result);
    }

public:
    vector<int> largestValues(TreeNode *root)
    {
        vector<int> result;
        dfs(root, 0, result);
        return result;
    }
};