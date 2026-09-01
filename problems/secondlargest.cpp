#include <iostream>
using namespace std;
#include <vector>
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
    int largest = nums[0];
    int second_largest = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (largest < nums[i])
        {
            second_largest = largest;
            largest = nums[i];
        }
        else if (nums[i] > second_largest && nums[i] != largest)
        {
            second_largest = nums[i];
        }
    }
    cout << "Second Largest number is" << second_largest << endl;
}
