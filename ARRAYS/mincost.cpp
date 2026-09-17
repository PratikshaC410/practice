class Solution {
public:
    long long minimumCost(long long cost1, long long cost2, long long costBoth, long long need1, long long need2) {
        long long option1 = need1 * cost1 + need2 * cost2;
    
    long long common = min(need1, need2);
    long long option2 = (common * costBoth) 
                      + (need1 - common) * cost1 
                      + (need2 - common) * cost2;
                      
    long long option3 = max(need1, need2) * costBoth;
    
    return min({option1, option2, option3});
    }
};