class Solution
{
public:
    int minOperations(string s)
    {
        int ans = 0;

        for (char c : s)
        {
            int cnt = (26 - (c - 'a')) % 26;
            ans = max(ans, cnt);
        }

        return ans;
    }
};