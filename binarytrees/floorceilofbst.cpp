#include <iostream>
#include <vector>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

// Insert into BST
TreeNode *insert(TreeNode *root, int val)
{
    if (root == nullptr)
        return new TreeNode(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

class Solution
{
public:
    vector<int> floorCeilOfBST(TreeNode *root, int key)
    {
        int floor = -1, ceil = -1;

        TreeNode *curr = root;

        // Find Floor
        while (curr)
        {
            if (curr->data == key)
            {
                floor = curr->data;
                break;
            }

            if (curr->data > key)
            {
                curr = curr->left;
            }
            else
            {
                floor = curr->data;
                curr = curr->right;
            }
        }

        curr = root;

        // Find Ceil
        while (curr)
        {
            if (curr->data == key)
            {
                ceil = curr->data;
                break;
            }

            if (curr->data < key)
            {
                curr = curr->right;
            }
            else
            {
                ceil = curr->data;
                curr = curr->left;
            }
        }

        return {floor, ceil};
    }
};

int main()
{
    TreeNode *root = nullptr;

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter BST node values: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        root = insert(root, x);
    }

    int key;
    cout << "Enter key: ";
    cin >> key;

    Solution obj;
    vector<int> ans = obj.floorCeilOfBST(root, key);

    cout << "Floor = " << ans[0] << endl;
    cout << "Ceil = " << ans[1] << endl;

    return 0;
}