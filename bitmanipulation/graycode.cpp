class Solution
{
public:
    vector<int> grayCode(int n)
    {
        vector<int> ans;
        int size = pow(2, n);
        for (int i = 0; i < size; i++)
        {
            int num = i;
            ans.push_back(num ^ (i / 2));
        }
        return ans;
    }
};