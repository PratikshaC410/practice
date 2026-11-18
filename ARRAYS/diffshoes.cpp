
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    int cnt = 0;

    if (s1 == s2)
        cnt++;
    if (s1 == s3)
        cnt++;
    if (s1 == s4)
        cnt++;
    if (s2 == s3)
        cnt++;
    if (s2 == s4)
        cnt++;
    if (s3 == s4)
        cnt++;

    int distinct = 1;

    if (s2 != s1)
        distinct++;
    if (s3 != s1 && s3 != s2)
        distinct++;
    if (s4 != s1 && s4 != s2 && s4 != s3)
        distinct++;

    cout << 4 - distinct;

    return 0;
}
