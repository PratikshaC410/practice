class Solution
{
public:
    int findCheapestPrice(int n, vector<vector<int>> &flights, int src, int dst,
                          int k)
    {

        vector<vector<pair<int, int>>> adj_list(n);
        for (int i = 0; i < flights.size(); i++)
        {
            int u = flights[i][0];
            int v = flights[i][1];
            int w = flights[i][2];
            adj_list[u].push_back({v, w});
        }
        vector<int> dist(n, 1e9);
        dist[src] = 0;
        for (int i = 0; i <= k; i++)
        {
            vector<int> temp = dist;
            for (int u = 0; u < n; u++)
            {
                for (int j = 0; j < adj_list[u].size(); j++)
                {
                    int p = adj_list[u][j].first;
                    int q = adj_list[u][j].second;
                    if (dist[u] != 1e9 && dist[u] + q < temp[p])
                    {
                        temp[p] = dist[u] + q;
                    }
                }
            }
            dist = temp;
        }
        if (dist[dst] == 1e9)
        {
            return -1;
        }
        return dist[dst];
    }
};