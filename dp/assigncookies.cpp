#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findContentChildren(vector<int> &student, vector<int> &cookie)
    {
        sort(student.begin(), student.end());
        sort(cookie.begin(), cookie.end());
        vector<vector<int>> memo(student.size(), vector<int>(cookie.size(), -1));
        return helper(0, 0, student, cookie, memo);
    }

private:
    int helper(int studentIndex, int cookieIndex, vector<int> &student, vector<int> &cookie, vector<vector<int>> &memo)
    {
        if (studentIndex >= student.size() || cookieIndex >= cookie.size())
            return 0;
        if (memo[studentIndex][cookieIndex] != -1)
            return memo[studentIndex][cookieIndex];

        int result = 0;
        if (cookie[cookieIndex] >= student[studentIndex])
        {
            result = max(result, 1 + helper(studentIndex + 1, cookieIndex + 1, student, cookie, memo));
        }
        result = max(result, helper(studentIndex, cookieIndex + 1, student, cookie, memo));
        return memo[studentIndex][cookieIndex] = result;
    }
};
