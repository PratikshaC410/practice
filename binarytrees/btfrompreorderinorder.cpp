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
    TreeNode *build_tree(vector<int> &preorder, int &preorder_indx, int left, int right, unordered_map<int, int> &inorder_map)
    {
        if (left > right)
        {
            return NULL;
        }
        int root_val = preorder[preorder_indx++];
        TreeNode *root = new TreeNode(root_val);
        int mid_node = inorder_map[root_val];
        root->left = build_tree(preorder, preorder_indx, left, mid_node - 1, inorder_map);
        root->right = build_tree(preorder, preorder_indx, mid_node + 1, right, inorder_map);
        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
    {
        unordered_map<int, int> inorder_map;
        for (int i = 0; i < inorder.size(); i++)
        {
            inorder_map[inorder[i]] = i;
        }
        int preorder_indx = 0;
        return build_tree(preorder, preorder_indx, 0, inorder.size() - 1, inorder_map);
    }
};