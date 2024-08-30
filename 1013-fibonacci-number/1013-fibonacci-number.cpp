class Solution {
public:
    int fibSolve(int n , vector<int>&dp){
        //base case
        if(n<=1)
        return n;
        
        //if value is already available
        if(dp[n]!=-1)
        return dp[n];

        return dp[n] = fibSolve(n-1 , dp) + fibSolve(n-2 , dp);
    }
    int fib(int n) {
        
        vector<int>dp(n+1 , -1);

        return fibSolve(n , dp);
    }
};