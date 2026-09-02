#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int sum_even = 0;
        int sum_odd = 0;

        for (int i = 0; i < n; i += 2)
        {
            sum_odd = sum_odd + nums[i];
        }

        for (int i = 1; i < n; i += 2)
        {
            sum_even = sum_even + nums[i];
        }

        int res = sum_odd - sum_even;
        cout << res << "\n";
    }

    return 0;
}