#include <bits/stdc++.h>
using namespace std;

bool between(int x, int a, int b) {
    if (a < b) {
        return a < x && x < b;
    }
    else {
        return x > a || x < b;
    }
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool cBetween = between(c, a, b);
        bool dBetween = between(d, a, b);

        if (cBetween != dBetween)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
