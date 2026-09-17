class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        long long score = 0;

        for (int i = 0; i < k; ++i) {
            int maxVal = maxHeap.top();
            maxHeap.pop();

            score += maxVal;

            int newVal = (maxVal + 2) / 3;
            maxHeap.push(newVal);
        }

        return score;
    }
};