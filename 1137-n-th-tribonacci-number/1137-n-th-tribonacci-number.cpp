class Solution {
public:
    int fib(int n, vector<int>&dp){
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        dp[0]=0,dp[1]=1,dp[2]=1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp)+fib(n-3,dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        return fib(n,dp);
    }
};