class Solution
{
public:
    int mySqrt(int x)
    {
        int low = 1, high = x;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            unsigned long product = mid * mid;
            if (product == x)
            {

                return mid;
            }
            else if (product > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return high;
    }
};