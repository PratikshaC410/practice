#include <vector>

class Solution {
private:
    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

public:
    int numPrimeArrangements(int n) {
        const int MOD = 1e9 + 7;
        
        int P = 0;
        for (int i = 1; i <= n; ++i) {
            if (isPrime(i)) P++;
        }
        
        int non_P = n - P;
        
        long long ans = 1;
        for (int i = 1; i <= P; ++i) {
            ans = (ans * i) % MOD;
        }
        for (int i = 1; i <= non_P; ++i) {
            ans = (ans * i) % MOD;
        }
        
        return ans;
    }
};