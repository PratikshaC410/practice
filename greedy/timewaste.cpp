#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    double x[100], y[100];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    double dist = 0;

    for (int i = 1; i < n; i++)
    {
        double dx = x[i] - x[i - 1];
        double dy = y[i] - y[i - 1];

        dist += sqrt(dx * dx + dy * dy);
    }

    double time = (dist * k) / 50.0;

    cout << time << endl;

    return 0;
}