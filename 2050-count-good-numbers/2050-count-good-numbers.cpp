class Solution {
public:
    int countGoodNumbers(long long n) {
        const int MOD = 1e9 + 7;
        long long even = (n + 1) / 2; // number of even positions
        long long odd = n / 2;        // number of odd positions
        
        return (modPow(5, even, MOD) * modPow(4, odd, MOD)) % MOD;
    }
    
private:
    long long modPow(long long base, long long exp, int mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp & 1) result = (result * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }
        return result;
    }
};