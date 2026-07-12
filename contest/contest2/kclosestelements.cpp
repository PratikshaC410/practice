class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> res;
        int low = 0, high = arr.size() - 1;
        while (high - low + 1 > k)
        {
            if (abs(arr[low] - x) <= abs(arr[high] - x))
            {
                high = high - 1;
            }
            else
            {
                low = low + 1;
            }
        }
        for (int i = low; i <= high; i++)
        {
            res.push_back(arr[i]);
        }
        return res;
    }
};