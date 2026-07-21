#include <iostream>
class Solution
{
public:
    vector<int> addNegabinary(vector<int> &arr1, vector<int> &arr2)
    {
        int i = arr1.size() - 1;
        int j = arr2.size() - 1;

        int carry = 0;
        vector<int> ans;

        while (i >= 0 || j >= 0 || carry)
        {

            int sum = carry;

            if (i >= 0)
                sum += arr1[i--];

            if (j >= 0)
                sum += arr2[j--];

            ans.push_back(sum & 1);

            carry = -(sum >> 1);
        }

        while (ans.size() > 1 && ans.back() == 0)
            ans.pop_back();

        reverse(ans.begin(), ans.end());

        return ans;
    }
};