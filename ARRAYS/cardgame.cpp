#include <iostream>
#include <vector>

using namespace std;

const int MAX_LIMIT = 200005;
vector<bool> prime_table(MAX_LIMIT + 1, true);

void precomputePrimes()
{
    prime_table[0] = false;
    prime_table[1] = false;

    for (int p = 2; p * p <= MAX_LIMIT; p++)
    {
        if (prime_table[p])
        {
            for (int multiple = p * p; multiple <= MAX_LIMIT; multiple += p)
            {
                prime_table[multiple] = false;
            }
        }
    }
}

bool isPrime(int x)
{
    if (x < 0 || x > MAX_LIMIT)
        return false;
    return prime_table[x];
}

void solve()
{
    int n;
    cin >> n;

    if (isPrime(n + 1))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{

    precomputePrimes();

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}