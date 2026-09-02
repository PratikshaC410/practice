#include <iostream>
using namespace std;
class Solution
{
public:
    long long maxPoints(vector<int> &technique1, vector<int> &technique2, int k)
    {
        int n = technique1.size();

        vector<pair<int, int>> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = {technique1[i] - technique2[i], i};
        }

        sort(diff.rbegin(), diff.rend());

        long long total = 0;

        for (int i = 0; i < k; i++)
        {
            int idx = diff[i].second;
            total += technique1[idx];
        }

        for (int i = k; i < n; i++)
        {
            int idx = diff[i].second;
            total += max(technique1[idx], technique2[idx]);
        }

        return total;
    }
};