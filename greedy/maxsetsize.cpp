class Solution
{
public:
    int maximumSetSize(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int limit = n / 2;

        set<int> s1, s2;

        for (int x : nums1)
            s1.insert(x);

        for (int x : nums2)
            s2.insert(x);

        int only1 = 0;
        int only2 = 0;
        int common = 0;

        for (int x : s1)
        {
            if (s2.count(x))
                common++;
            else
                only1++;
        }

        for (int x : s2)
        {
            if (!s1.count(x))
                only2++;
        }

        int take1 = min(only1, limit);
        int take2 = min(only2, limit);

        int remaining = 2 * limit - take1 - take2;

        int takeCommon = min(common, remaining);

        return take1 + take2 + takeCommon;
    }
};