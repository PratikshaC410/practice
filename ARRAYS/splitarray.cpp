class Solution
{
private:
    bool isprime(long long n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; (long long)i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    long long splitArray(vector<int> &nums)
    {
        long long sum_a = 0, sum_b = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isprime(i))
            {
                sum_a = sum_a + nums[i];
            }
            else
            {
                sum_b = sum_b + nums[i];
            }
        }
        return abs(sum_a - sum_b);
    }
};