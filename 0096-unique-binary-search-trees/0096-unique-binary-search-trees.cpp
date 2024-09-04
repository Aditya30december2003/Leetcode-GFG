class Solution {
public:
    int numTrees(int n) {
        // Base case
        if (n == 0 || n == 1) {
            return 1;
        }

        // DP array to store the number of unique BSTs for each value of n
        int dp[n + 1];
        dp[0] = 1;  // Base case: 1 way to arrange 0 nodes
        dp[1] = 1;  // Base case: 1 way to arrange 1 node

        // Fill the DP array
        for (int i = 2; i <= n; i++) {
            dp[i] = 0;
            for (int j = 1; j <= i; j++) {
                dp[i] += dp[j - 1] * dp[i - j];
            }
        }

        return dp[n];
    }
};
