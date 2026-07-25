#include <iostream>
class Solution
{
public:
    int ch = 0, currlen = 0, maxlen = 0;
    void palindrome(string &s, int i, int j)
    {
        if (i < 0 || j > s.length())
        {
            return;
        }
        if (s[i] != s[j])
        {
            return;
        }
        currlen = j - i + 1;
        if (maxlen < currlen)
        {
            maxlen = currlen;
            ch = i;
        }
        palindrome(s, i - 1, j + 1);
    }
    string longestPalindrome(string s)
    {

        for (int i = 0; i < s.length(); i++)
        {
            palindrome(s, i, i);
        }
        return s.substr(ch, maxlen);
    }
};