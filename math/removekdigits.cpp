class Solution
{
public:
    string removeKdigits(string num, int k)
    {
        string result = "";
        // if(num.length()==k){
        //     return "0";
        // }

        for (int c = 0; c < num.length(); c++)
        {
            while (result.length() > 0 && result.back() > num[c] && k > 0)
            {

                result.pop_back();
                k--;
            }
            result.push_back(num[c]);
        }
        while (k > 0 && result.length() > 0)
        {
            result.pop_back();
            k--;
        }

        string ans = "";
        bool found = true;
        for (char c : result)
        {
            if (found && c == '0')
            {
                continue;
            }
            found = false;
            ans.push_back(c);
        }
        if (ans.length() == 0)
        {
            ans = "0";
        }

        // return (num.length()==k)?"0":ans;
        return ans;
    }
};