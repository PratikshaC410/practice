#include <iostream>

class Solution

{
public:
    int minCost(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        vector<vector<int>> distance_cost(m, vector<int>(n, INT_MAX));
        distance_cost[0][0] = 0;
        queue<pair<int, int>> q;
        q.push({0, 0});
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            int r = curr.first;
            int c = curr.second;
            for (int i = 0; i < 4; i++)
            {
                int new_row = r + direction[i].first;
                int new_col = c + direction[i].second;
                if (new_row >= 0 && new_row < m && new_col >= 0 && new_col < n)
                {
                    int curr_cost;
                    if (grid[r][c] == i + 1)
                    {
                        curr_cost = 0;
                    }
                    else
                    {
                        curr_cost = 1;
                    }
                    int new_cost = distance_cost[r][c] + curr_cost;
                    if (new_cost < distance_cost[new_row][new_col])
                    {
                        distance_cost[new_row][new_col] = new_cost;
                        q.push({new_row, new_col});
                    }
                }
            }
        }
        return distance_cost[m - 1][n - 1];
    }
};