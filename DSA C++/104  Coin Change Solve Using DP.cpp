class Solution {

// 1 -> Recursion:
int solveRec(vector<int>& coins, int amount)
{
    // base case
    if(amount == 0)
        return 0;

    if(amount < 0)
        return INT_MAX;

    int mini = INT_MAX;
    for(int i=0; i<coins.size(); i++) {
        int ans = solveRec(coins, amount-coins[i]);
        if(ans != INT_MAX)
            mini = min(mini, 1+ans);
    }

    return mini;
}

// 2 -> Recursion + memoization
int solveMem(vector<int>& coins, int amount, vector<int>& dp)
{
    // base case
    if(amount == 0)
        return 0;

    if(amount < 0)
        return INT_MAX;

    if(dp[amount] != -1)
        return dp[amount];

    int mini = INT_MAX;
    for(int i=0; i<coins.size(); i++) {
        int ans = solveMem(coins, amount-coins[i], dp);
        if(ans != INT_MAX)
            mini = min(mini, 1+ans);
    }

    dp[amount] = mini;
    return mini;
}

// 3 Tabulation Approach:
int solvetab(vector<int> &coins, int amount)
{
    vector<int> dp(amount+1, INT_MAX);
    dp[0] = 0;

    for(int i=1; i<=amount; i++)
    {
        for(int j=0; j<coins.size(); i++)
        {
            if(i-coins[j] >= 0 && (dp[i-coins[j]] != INT_MAX))
            {
                dp[i] = min(dp[i], 1+dp[i-coins[j]]);
            }
        }
    }

    if(dp[amount] == INT_MAX)
        return -1;
    else
        return dp[amount];
}

public:
    int coinChange(vector<int>& coins, int amount) {
    // 1 -> Recursion:
    /*
        int ans = solveRec(coins, amount);
        if(ans == INT_MAX)
            return -1;
        else
            return ans;
   */

   // 2 -> Recursion + memoization
    /*
        vector<int> dp(amount+1, -1);
        int ans = solveMem(coins, amount, dp);
        if(ans == INT_MAX)
            return -1;
        else
            return ans;
   */

    // 3 Tabulation Approach:
        return solvetab(coins, amount);


    }
};