class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> primeFactors;
        
        for (int num : nums) {
            if (num % 2 == 0) {
                primeFactors.insert(2);
                while (num % 2 == 0) {
                    num /= 2;
                }
            }
            
            for (int i = 3; i * i <= num; i += 2) {
                if (num % i == 0) {
                    primeFactors.insert(i);
                    while (num % i == 0) {
                        num /= i;
                    }
                }
            }
            
            if (num > 1) {
                primeFactors.insert(num);
            }
        }
        
        return primeFactors.size();
    }
};