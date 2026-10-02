class Solution
{
public:
    vector<int> primes;

    bool isPrime(int x)
    {
        for (int p : primes)
            if (p == x)
                return true;
        return false;
    }

    int minOperations(int n, int m)
    {
        primes.clear();
        for (int x = 2; x < 10000; x++)
        {
            bool ok = true;
            for (int i = 2; i * i <= x; i++)
                if (x % i == 0)
                {
                    ok = false;
                    break;
                }
            if (ok)
                primes.push_back(x);
        }

        if (isPrime(n) || isPrime(m))
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

                    if (isPrime(next))
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