#include <iostream>
using namespace std;
class Solution
{
public:
    int numDupDigitsAtMostN(int n)
    {
        string s = to_string(n);
        int len = s.size();

        int unique = 0;

        for (int digits = 1; digits < len; digits++)
        {

            int count = 9;

            for (int j = 1; j < digits; j++)
            {
                count *= (10 - j);
            }

            unique += count;
        }

        vector<int> used(10, 0);

        for (int i = 0; i < len; i++)
        {
            int digit = s[i] - '0';

            for (int d = (i == 0 ? 1 : 0); d < digit; d++)
            {
                if (used[d] == 0)
                {
                    int remaining = len - i - 1;
                    int ways = 1;

                    int available = 10 - (i + 1);

                    for (int j = 0; j < remaining; j++)
                    {
                        ways *= (available - j);
                    }

                    unique += ways;
                }
            }
            if (used[digit])
            {
                break;
            }

            used[digit] = 1;

            if (i == len - 1)
            {
                unique++;
            }
        }

        return n - unique;
    }
};