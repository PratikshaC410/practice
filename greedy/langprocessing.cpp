#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e';
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<string> syllables;
    int i = n - 1;

    while (i >= 0)
    {
        if (isVowel(s[i]))
        {
            syllables.push_back(s.substr(i - 1, 2));
            i -= 2;
        }
        else
        {
            syllables.push_back(s.substr(i - 2, 3));
            i -= 3;
        }
    }

    reverse(syllables.begin(), syllables.end());

    for (int j = 0; j < (int)syllables.size(); j++)
    {
        cout << syllables[j] << (j + 1 == (int)syllables.size() ? "" : ".");
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