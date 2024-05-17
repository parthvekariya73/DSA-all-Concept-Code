class Solution {

// top-down approch in dp
int fib1(int n, vector<int>& dp)
{
    // base case
    if(n <= 1)
        return n;

    if(dp[n] != -1)
        return dp[n];

    dp[n] = fib1(n-1, dp) + fib1(n-2, dp);
    return dp[n];
}

public:
    int fib(int n) {
        
        vector<int> dp(n+1);

        for(int i=0; i<=n; i++)
            dp[i] = -1;

        return fib1(n, dp);
      
    }
};