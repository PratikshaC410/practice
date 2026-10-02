class Solution
{
public:
    bool dfs(int node, vector<vector<int>> &adj, vector<int> &vis)
    {
        vis[node] = 1;
        for (int i = 0; i < adj[node].size(); i++)
        {
            int curr = adj[node][i];
            if (vis[curr] == 1)
            {
                return true;
            }
            if (vis[curr] == 0)
            {
                if (dfs(curr, adj, vis))
                {
                    return true;
                }
            }
        }
        vis[node] = 2;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<vector<int>> adj(numCourses);
        for (int i = 0; i < prerequisites.size(); i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> vis(numCourses, 0);
        for (int i = 0; i < numCourses; i++)
        {
            if (vis[i] == 0)
            {
                if (dfs(i, adj, vis))
                    return false;
            }
        }
        return true;
    }
};