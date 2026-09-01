#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Array is empty." << endl;
        return 0;
    }

    vector<int> nums(n);
    cout << "Enter the sorted arr elements:" << endl;
    for (int k = 0; k < n; k++)
    {
        cin >> nums[k];
    }

    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    cout << "Array after removing duplicates:" << endl;
    for (int k = 0; k <= i; k++)
    {
        cout << nums[k] << " ";
    }
    cout << endl;

    return 0;
}