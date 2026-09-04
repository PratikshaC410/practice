#include <iostream>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long total_ops = 0;
    int i = 0;

    while (i < n)
    {
        while (i < n && s[i] == 'B')
        {
            i++;
        }
        if (i >= n)
            break;

        long long a_count = 0;
        int j = i;

        while (j < n)
        {
            if (s[j] == 'A')
            {
                a_count++;
                j++;
            }
            else
            {
                total_ops += a_count;
                j++;
                if (j < n && s[j] == 'B')
                {
                    break;
                }
            }
        }
        i = j;
    }

    cout << total_ops << "\n";
}

int main()
{

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
    }
    return 0;
}