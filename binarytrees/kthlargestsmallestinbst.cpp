/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
    int count1 = 0;
    int ans1 = -1;

    void inorder(TreeNode *root, int k)
    {
        if (root == NULL || ans1 != -1)
            return;

        inorder(root->left, k);

        count1++;
        if (count1 == k)
        {
            ans1 = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode *root, int k)
    {
        inorder(root, k);
        return ans1;
    }

    int count2 = 0;
    int ans2 = -1;

    void reverseInorder(TreeNode *root, int k)
    {
        if (root == NULL || ans2 != -1)
            return;

        reverseInorder(root->right, k);

        count2++;
        if (count2 == k)
        {
            ans2 = root->val;
            return;
        }

        reverseInorder(root->left, k);
    }

    int kthLargest(TreeNode *root, int k)
    {
        reverseInorder(root, k);
        return ans2;
    }
};