#include <iostream>
class Solution
{
public:
    int findLeastNumOfUniqueInts(vector<int> &arr, int k)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        vector<int> v;

        for (auto p : freq)
        {
            v.push_back(p.second);
        }

        sort(v.begin(), v.end());

        int unique = v.size();

        for (int i = 0; i < v.size(); i++)
        {
            if (k >= v[i])
            {
                k -= v[i];
                unique--;
            }
            else
            {
                break;
            }
        }

        return unique;
    }
};