#include <iostream>
class Solution
{
public:
    vector<TreeNode *> ans;
    unordered_set<int> st;

    TreeNode *solve(TreeNode *root)
    {
        if (root == NULL)
            return NULL;

        root->left = solve(root->left);
        root->right = solve(root->right);

        if (st.find(root->val) != st.end())
        {
            if (root->left != NULL)
            {
                ans.push_back(root->left);
            }

            if (root->right != NULL)
            {
                ans.push_back(root->right);
            }

            return NULL;
        }

        return root;
    }

    vector<TreeNode *> delNodes(TreeNode *root, vector<int> &to_delete)
    {
        for (int i = 0; i < to_delete.size(); i++)
        {
            st.insert(to_delete[i]);
        }

        TreeNode *temp = solve(root);

        if (temp != NULL)
        {
            ans.push_back(temp);
        }

        return ans;
    }
};
