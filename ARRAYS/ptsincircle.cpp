#include <iostream>
class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {
        vector<int> ans;

        for (auto &q : queries)
        {
            int x = q[0];
            int y = q[1];
            int r = q[2];

            int cnt = 0;

            for (auto &p : points)
            {
                long long dx = p[0] - x;
                long long dy = p[1] - y;

                if (dx * dx + dy * dy <= 1LL * r * r)
                    cnt++;
            }

            ans.push_back(cnt);
        }

        return ans;
    }
};