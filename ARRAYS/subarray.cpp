#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    if (n == 1)
    {
        cout << (p[0] == 1 ? "YES\n" : "NO\n");
        return;
    }

    bool possible = true;
    vector<int> current = p;
    for (int k = n; k >= 1; --k)
    {
        int chosen_L = -1;
        for (int L = 0; L <= n - k; ++L)
        {
            bool valid = true;
            for (int j = L; j < L + k; ++j)
            {
                if (current[j] <= 0)
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
            {
                chosen_L = L;
                break;
            }
        }

        if (chosen_L == -1)
        {
            possible = false;
            break;
        }

        for (int j = chosen_L; j < chosen_L + k; ++j)
        {
            current[j]--;
        }
    }

    if (possible)
    {
        for (int x : current)
        {
            if (x != 0)
            {
                possible = false;
                break;
            }
        }
    }

    cout << (possible ? "YES" : "NO") << "\n";
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
