#include <iostream>
class Solution
{
public:
    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end(),
             [](vector<int> &a, vector<int> &b)
             {
                 return a[1] < b[1];
             });

        int cnt = 0;
        int end = INT_MIN;

        for (auto &p : pairs)
        {
            if (p[0] > end)
            {
                cnt++;
                end = p[1];
            }
        }

        return cnt;
    }
};