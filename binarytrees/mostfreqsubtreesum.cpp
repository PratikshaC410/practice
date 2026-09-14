#include <iostream>
using namespace std;
class Solution
{
    unordered_map<int, int> count;
    vector<int> result;
    int maxFreq = 0;

    int computeSubtreeSum(TreeNode *root)
    {
        if (!root)
            return 0;

        int sum = root->val + computeSubtreeSum(root->left) + computeSubtreeSum(root->right);

        int currentFreq = ++count[sum];

        if (currentFreq > maxFreq)
        {
            maxFreq = currentFreq;
            result.clear();
            result.push_back(sum);
        }
        else if (currentFreq == maxFreq)
        {
            result.push_back(sum);
        }

        return sum;
    }

public:
    vector<int> findFrequentTreeSum(TreeNode *root)
    {
        computeSubtreeSum(root);
        return result;
    }
};