#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    bool has_B = false;
    for (char c : s)
    {
        if (c == 'B')
        {
            has_B = true;
            break;
        }
    }

    for (int i = 0; i < q; ++i)
    {
        long long a;
        cin >> a;

        if (!has_B)
        {
            cout << a << (i == q - 1 ? "" : " ");
        }
        else
        {
            long long steps = 0;
            int idx = 0;

            while (a > 0)
            {
                if (s[idx] == 'A')
                {
                    int count_A = 0;
                    while (s[(idx + count_A) % n] == 'A')
                    {
                        count_A++;
                    }

                    if (a <= count_A)
                    {
                        steps += a;
                        a = 0;
                        break;
                    }
                    else
                    {
                        a -= count_A;
                        steps += count_A;
                        idx = (idx + count_A) % n;
                    }
                }
                else
                {
                    a /= 2;
                    steps++;
                    idx = (idx + 1) % n;
                }
            }

            cout << steps << (i == q - 1 ? "" : " ");
        }
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