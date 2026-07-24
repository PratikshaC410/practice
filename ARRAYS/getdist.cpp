#include <iostream>
class Solution
{
public:
    vector<long long> getDistances(vector<int> &arr)
    {

        int n = arr.size();
        vector<long long> ans(n);

        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]].push_back(i);
        }

        for (auto &it : mp)
        {

            vector<int> &v = it.second;
            int m = v.size();

            vector<long long> prefix(m + 1, 0);

            for (int i = 0; i < m; i++)
            {
                prefix[i + 1] = prefix[i] + v[i];
            }

            for (int i = 0; i < m; i++)
            {

                long long left = 1LL * i * v[i] - prefix[i];

                long long right =
                    (prefix[m] - prefix[i + 1]) -
                    1LL * (m - i - 1) * v[i];

                ans[v[i]] = left + right;
            }
        }

        return ans;
    }
};