#include <iostream>
class Solution
{
public:
    vector<int> advantageCount(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();

        sort(nums1.begin(), nums1.end());

        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            v.push_back({nums2[i], i});
        }

        sort(v.rbegin(), v.rend());

        vector<int> ans(n);

        int low = 0, high = n - 1;

        for (int i = 0; i < n; i++)
        {
            int val = v[i].first;
            int idx = v[i].second;

            if (nums1[high] > val)
            {
                ans[idx] = nums1[high];
                high--;
            }
            else
            {
                ans[idx] = nums1[low];
                low++;
            }
        }

        return ans;
    }
};
