#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    long long total_cost = 0;
    long long ones_count = 0;
    int n = s.length();

    for (int i = 0; i < n;)
    {
        if (s[i] == '1')
        {
            ones_count++;
            i++;
        }
        else
        {
            int j = i;
            while (j < n && s[j] == '0')
            {
                j++;
            }
            long long zero_block_len = j - i;

            if (ones_count > 0)
            {
                total_cost += (ones_count + 1) + (zero_block_len - 1);
            }

            i = j;
        }
    }

    cout << total_cost << "\n";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}