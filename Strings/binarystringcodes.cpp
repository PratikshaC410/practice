#include <iostream>
class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        unordered_set<string> st;

        for (int i = 0; i <= s.length() - k; i++)
        {
            string temp = s.substr(i, k);
            st.insert(temp);
        }

        return st.size() == pow(2, k);
    }
};