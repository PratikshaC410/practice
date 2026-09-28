#include <string>
#include <numeric>

class Solution
{
public:
    string gcdOfStrings(std::string str1, std::string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        int gcdLength = gcd(str1.length(), str2.length());
        return str1.substr(0, gcdLength);
    }
};