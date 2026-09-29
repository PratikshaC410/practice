#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    long long n;
    string s;
    cin >> n >> s;

    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());

    if (s <= rev_s)
    {
        cout << s << "\n";
    }
    else
    {
        cout << rev_s + s << "\n";
    }
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