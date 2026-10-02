#include <iostream>
class Solution
{
public:
    vector<bool> primes = vector<bool>(10000, true);
    bool check = false;

    void isPrime()
    {
        primes[0] = primes[1] = false;
        for (int i = 2; i * i < 10000; i++)
            if (primes[i])
                for (int j = i * i; j < 10000; j += i)
                    primes[j] = false;
        check = true;
    }

    int minOperations(int n, int m)
    {
        if (!check)
            isPrime();

        if (primes[n] || primes[m])
            return -1;

        vector<int> dist(10000, INT_MAX);
        queue<int> q;
        dist[n] = n;
        q.push(n);

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            string s = to_string(cur);
            for (int i = 0; i < s.size(); i++)
            {
                char old = s[i];
                for (int d = -1; d <= 1; d += 2)
                {
                    int nd = (old - '0') + d;
                    if (nd < 0 || nd > 9)
                        continue;
                    if (i == 0 && nd == 0 && s.size() > 1)
                        continue;

                    s[i] = '0' + nd;
                    int next = stoi(s);
                    s[i] = old;

                    if (primes[next])
                        continue;
                    if (dist[cur] + next < dist[next])
                    {
                        dist[next] = dist[cur] + next;
                        q.push(next);
                    }
                }
            }
        }
        return dist[m] == INT_MAX ? -1 : dist[m];
    }
};