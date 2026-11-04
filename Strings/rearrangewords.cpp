#include <iostream>
class Solution
{
    int cnt_str(string s)
    {
        int cnt = 0;
        for (char c : s)
        {
            cnt++;
        }
        return cnt;
    }

public:
    string arrangeWords(string text)
    {
        vector<pair<int, pair<int, string>>> v;
        string word = "";

        text[0] = tolower(text[0]);

        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == ' ')
            {
                v.push_back({cnt_str(word), {v.size(), word}});
                word = "";
            }
            else
            {
                word += text[i];
            }
        }

        v.push_back({cnt_str(word), {v.size(), word}});

        sort(v.begin(), v.end());

        string res = "";

        for (int i = 0; i < v.size(); i++)
        {
            string s = v[i].second.second;

            if (i == 0)
            {
                s[0] = toupper(s[0]);
            }

            res += s;

            if (i != v.size() - 1)
            {
                res += " ";
            }
        }

        return res;
    }
};