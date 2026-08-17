#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> parent(n + 1);
        vector<vector<int>> children(n + 1);

        for (int i = 2; i <= n; ++i)
        {
            cin >> parent[i];
            children[parent[i]].push_back(i);
        }

        int m;
        cin >> m;

        vector<bool> isDam(n + 1, false);
        for (int i = 0; i < m; ++i)
        {
            int x;
            cin >> x;
            isDam[x] = true;
        }

        vector<bool> has(n + 1, false);
        vector<int> cameras;

        for (int v = n; v >= 1; --v)
        {
            bool cur = isDam[v];

            for (int u : children[v])
            {
                if (!has[u])
                    continue;

                if (cur)
                {
                    cameras.push_back(u);
                }
                else
                {
                    cur = true;
                }
            }

            has[v] = cur;
        }

        cout << cameras.size();
        for (int u : cameras)
            cout << ' ' << u;
        cout << '\n';
    }

    return 0;
}
