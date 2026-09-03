#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> counts(26, 0);
    string s = "";

    for (int i = 0; i < n; i++)
    {
        for (int c = 0; c < 26; c++)
        {
            if (counts[c] == a[i])
            {
                s += (char)('a' + c);
                counts[c]++;
                break;
            }
        }
    }

    cout << s << "\n";
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