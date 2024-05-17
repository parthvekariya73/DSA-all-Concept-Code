class Solution {

// recusion + memorization in dp:
    int solve(vector<int>& cost, int n, vector<int>& dp)
    {
        if(n == 0)
            return cost[0];

        if(n == 1)
            return cost[1];

        // step 3
        if(dp[n] != -1)
            return dp[n];

        // step 2
        dp[n] = min(solve(cost, n-1, dp), solve(cost, n-2, dp)) + cost[n];
        return dp[n];
    }

// 2 -> tabulation approch in dp:
int solve2(vector<int>& cost, int n)
{
    // step 1 : creation
    vector<int> dp(n+1);

    // step 2 : base case
    dp[0] = cost[0];
    dp[1] = cost[1];

    // step 3
    for(int i=2; i<n; i++) {
        dp[i] = cost[i] + min( dp[i-1], dp[i-2] );
    }
    return min(dp[n-1], dp[n-2]);
}

// 3 -> space optimization approch in dp:
int solve3(vector<int>& cost, int n)
{
    // step 1 : base case
    int prev2 = cost[0];
    int prev1 = cost[1];

    // step 2
    for(int i=2; i<n; i++) {
        int curr = cost[i] + min(prev1, prev2);
        prev2 = prev1;
        prev1 = curr;
    }
    return min(prev1, prev2);
}

public:
    int minCostClimbingStairs(vector<int>& cost) {
  
        int n = cost.size();

// 1 -> recusion + memorization in dp:
/*
        // step 1 
        vector<int> dp(n+1, -1);

        int ans = min(solve(cost, n-1, dp), solve(cost, n-2, dp));
        return ans;
*/

// 2 -> tabulation approch in dp:
        // return solve2(cost, n);      

// 3 -> space optimization approch in dp:
        return solve3(cost, n);

    }
};