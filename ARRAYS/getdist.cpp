class Solution
{
public:
    vector<long long> getDistances(vector<int> &arr)
    {
        int n = arr.size();
        vector<long long> ans(n, 0);

        for (int i = 0; i < n; i++)
        {

            long long sum = 0;

            for (int j = 0; j < n; j++)
            {

                if (i != j && arr[i] == arr[j])
                {
                    sum += abs(i - j);
                }
            }

            ans[i] = sum;
        }

        return ans;
    }
};