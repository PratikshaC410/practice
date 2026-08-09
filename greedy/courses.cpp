#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(n + 1);
    vector<int> count_level(k + 2, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> b[i];
        count_level[b[i]]++;
    }

    vector<int> operations;

    while (count_level[k + 1] < n)
    {
        bool moved = false;

        for (int l = k; l >= 1; --l)
        {
            if (count_level[l] > 0)
            {
                if (l == k || count_level[l + 1] < a[l + 1])
                {
                    for (int i = 1; i <= n; ++i)
                    {
                        if (b[i] == l)
                        {
                            b[i]++;
                            count_level[l]--;
                            count_level[l + 1]++;
                            operations.push_back(i);
                            moved = true;
                            break;
                        }
                    }
                    if (moved)
                        break;
                }
            }
        }
    }

    cout << operations.size() << "\n";
    for (size_t i = 0; i < operations.size(); ++i)
    {
        cout << operations[i] << (i + 1 == operations.size() ? "" : " ");
    }
    cout << "\n";
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
