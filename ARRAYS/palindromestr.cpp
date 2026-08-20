#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string vowels = "aeiou";
    string ans = "";

    for (int i = 0; i < 5; i++)
    {
        int count = n / 5 + (i < (n % 5) ? 1 : 0);
        ans.append(count, vowels[i]);
    }

    cout << ans << "\n";
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