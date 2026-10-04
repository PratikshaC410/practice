#include <iostream>
class Solution
{
public:
    vector<int> beautifulIndices(string s, string a, string b, int k)
    {
        vector<int> posA;
        vector<int> posB;
        vector<int> ans;

        for (int i = 0; i + a.size() <= s.size(); i++)
        {
            if (s.substr(i, a.size()) == a)
            {
                posA.push_back(i);
            }
        }

        for (int i = 0; i + b.size() <= s.size(); i++)
        {
            if (s.substr(i, b.size()) == b)
            {
                posB.push_back(i);
            }
        }

        for (int i : posA)
        {
            for (int j : posB)
            {
                if (abs(i - j) <= k)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }

        return ans;
    }
};