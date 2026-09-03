#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int countA = 0, countB = 0, countC = 0, countD = 0;

    for (char c : s)
    {
        if (c == 'A')
            countA++;
        else if (c == 'B')
            countB++;
        else if (c == 'C')
            countC++;
        else if (c == 'D')
            countD++;
    }

    int score = min(countA, n) + min(countB, n) + min(countC, n) + min(countD, n);
    cout << score << "\n";
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