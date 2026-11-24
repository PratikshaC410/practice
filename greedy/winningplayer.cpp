#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string winningPlayer(int x, int y)
    {
        int moves = min(x, y / 4);
        return (moves % 2 == 1) ? "Alice" : "Bob";
    }
};