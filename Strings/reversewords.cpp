#include <iostream>
class Solution
{
public:
    string reverseWords(string s)
    {
        int i = 0;

        for (int j = 0; j <= s.length(); j++)
        {
            if (j == s.length() || s[j] == ' ')
            {
                int low = i;
                int high = j - 1;

                while (low < high)
                {
                    swap(s[low], s[high]);
                    low++;
                    high--;
                }

                i = j + 1;
            }
        }

        return s;
    }
};