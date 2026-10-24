#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> g(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        vector<int> dn(n + 1, -1), q;
        q.push_back(n);
        dn[n] = 0;
        for (size_t h = 0; h < q.size(); h++)
        {
            int u = q[h];
            if (u == 1)
                continue;
            for (int w : g[u])
            {
                if (dn[w] == -1)
                {
                    dn[w] = dn[u] + 1;
                    q.push_back(w);
                }
            }
        }

        int ans = dn[1];
        for (int i = 0; i < m; i++)
        {
            int v;
            cin >> v;
            if (dn[v] != -1)
                ans = max(ans, 1 + dn[v]);
        }
        cout << ans << "\n";
    }
    return 0;
}
