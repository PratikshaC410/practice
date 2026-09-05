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

        vector<int> a(n);
        vector<int> p;

        for (int &x : a)
            cin >> x;
        for (int i = 0; i < n; i++)
            if (a[i] == 1)
                p.push_back(i);

        int L = -1, R = -1;

        if (p.size() >= 2)
        {
            for (int i = 1; i < p.size(); i++)
            {
                if (R - L < p[i] - p[i - 1])
                {
                    L = p[i - 1];
                    R = p[i];
                }
            }
        }
        else if (p.size() == 1)
        {
            int far = -1;
            for (int i = 0; i < n; i++)
                if (a[i] == -1 &&
                    (far == -1 || abs(i - p[0]) > abs(far - p[0])))
                    far = i;

            if (far != -1)
                L = min(p[0], far), R = max(p[0], far);
        }
        else
        {
            for (int i = 0; i < n; i++)
                if (a[i] == -1)
                {
                    if (L == -1)
                        L = i;
                    R = i;
                }
        }

        if (L != -1 && R != -1 && L != R)
        {
            a[L] = a[R] = 1;
            for (int i = L + 1; i < R; i++)
                a[i] = 0;
        }

        for (int &x : a)
            if (x == -1)
                x = 0;

        for (int x : a)
            cout << x << ' ';
        cout << '\n';
    }
}