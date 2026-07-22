class Solution
{
public:
    bool makeEqual(vector<string> &words)
    {
        vector<int> freq(26, 0);

        for (string &s : words)
        {
            for (char ch : s)
            {
                freq[ch - 'a']++;
            }
        }

        int n = words.size();

        for (int cnt : freq)
        {
            if (cnt % n != 0)
                return false;
        }

        return true;
    }
};