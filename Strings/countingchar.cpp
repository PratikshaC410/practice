#include <iostream>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        map<char, int> mp;

        for (char c : chars)
        {
            mp[c]++;
        }

        int ans = 0;

        for (string word : words)
        {
            map<char, int> temp;
            bool good = true;

            for (char c : word)
            {
                temp[c]++;

                if (temp[c] > mp[c])
                {
                    good = false;
                    break;
                }
            }

            if (good)
            {
                ans += word.length();
            }
        }

        return ans;
    }
};