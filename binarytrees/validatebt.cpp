class Solution
{
public:
    vector<bool> visited;
    int count = 0;

    void dfs(int node, vector<int> &leftChild, vector<int> &rightChild)
    {
        if (node == -1 || visited[node])
            return;

        visited[node] = true;
        count++;

        dfs(leftChild[node], leftChild, rightChild);
        dfs(rightChild[node], leftChild, rightChild);
    }

    bool validateBinaryTreeNodes(int n, vector<int> &leftChild,
                                 vector<int> &rightChild)
    {

        vector<int> parent(n, 0);

        // Count parents
        for (int i = 0; i < n; i++)
        {
            if (leftChild[i] != -1)
            {
                parent[leftChild[i]]++;

                if (parent[leftChild[i]] > 1)
                    return false;
            }

            if (rightChild[i] != -1)
            {
                parent[rightChild[i]]++;

                if (parent[rightChild[i]] > 1)
                    return false;
            }
        }

        // Find root
        int root = -1;

        for (int i = 0; i < n; i++)
        {
            if (parent[i] == 0)
            {
                if (root != -1)
                    return false; // more than one root

                root = i;
            }
        }

        if (root == -1)
            return false;

        // DFS
        visited.resize(n, false);
        count = 0;

        dfs(root, leftChild, rightChild);

        return count == n;
    }
};