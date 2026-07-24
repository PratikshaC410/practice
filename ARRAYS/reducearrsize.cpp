#include <iostream>
class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> mp;

        for (int x : arr)
            mp[x]++;

        vector<int> freq;

        for (auto &it : mp)
            freq.push_back(it.second);

        sort(freq.begin(), freq.end(), greater<int>());

        int removed = 0;
        int cnt = 0;
        int target = arr.size() / 2;

        for (int f : freq)
        {
            removed += f;
            cnt++;

            if (removed >= target)
                break;
        }

        return cnt;
    }
};