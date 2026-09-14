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
    unordered_map<int, int> count;
    int maxFreq = 0;

    int computeSubtreeSum(TreeNode *root)
    {
        if (!root)
            return 0;

        int left = computeSubtreeSum(root->left);
        int right = computeSubtreeSum(root->right);
        int sum = root->val + left + right;

        count[sum]++;
        maxFreq = max(maxFreq, count[sum]);

        return sum;
    }

public:
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        computeSubtreeSum(root);

        vector<int> result;
        for (const auto &[sum, freq] : count)
        {
            if (freq == maxFreq)
            {
                result.push_back(sum);
            }
        }
        return result;
    }
};