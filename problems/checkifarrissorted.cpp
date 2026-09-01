#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the arr elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            continue;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "Array is sorted" << endl;
    }
}