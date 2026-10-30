class Solution
{
public:
    int kthLargestElement(vector<int> &nums, int k)
    {

        stack<int> st;

        for (int i = 0; i < nums.size(); i++)
        {

            while (!st.empty() && st.top() < nums[i])
            {
                int temp = st.top();
                st.pop();

                if (st.empty() || st.top() >= nums[i])
                {
                    st.push(nums[i]);
                    nums[i] = temp;
                }
            }

            st.push(nums[i]);
        }

        int cnt = 1;

        while (cnt < k)
        {
            st.pop();
            cnt++;
        }

        return st.top();
    }
};