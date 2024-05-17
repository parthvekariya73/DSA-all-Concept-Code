//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    
// recursion:
    int solveRec(int *arr, int n)
    {
        // base case
        if(n < 0)
            return 0;
        if(n == 0)
            return arr[0];
            
        int include = solveRec(arr, n-2) + arr[n];
        int exclude = solveRec(arr, n-1) + 0;
        
        return max(include, exclude);
    }
    
// recursion + memoization:
    int solveMem(int *arr, int n, vector<int>& dp)
    {
        // base case
        if(n < 0)
            return 0;
        if(n == 0)
            return arr[0];
            
        if(dp[n] != -1)
            return dp[n];
            
        int include = solveMem(arr, n-2, dp) + arr[n];
        int exclude = solveMem(arr, n-1, dp) + 0;
        
        dp[n] = max(include, exclude);
        return dp[n];
    }
    
// Tabulation:
    int solveTab(int *arr, int n)
    {
        vector<int> dp(n,0);
        
        dp[0] = arr[0];
        
        for(int i=1; i<n; i++)
        {
            int incl = dp[i-2] + arr[i];
            int excl = dp[i-1] + 0;
            dp[i] = max(incl, excl);
        }
        
        return dp[n-1];
    }
    
// space optimization:
    int solve(int *arr, int n)
    {
        int prev2 = 0;
        int prev1 = arr[0];
        
        for(int i=1; i<n; i++)
        {
            int incl = prev2 + arr[i];
            int excl = prev1 + 0;
            int ans = max(incl, excl);
            
            prev2 = prev1;
            prev1 = ans;
        }
        
        return prev1;
    }

public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    
	    // recursion:
	        // return solveRec(arr, n-1);
	    
        // recursion + memoization:
            // vector<int> dp(n, -1);
            // return solveMem(arr, n-1, dp);
        
        // Tabulation:
            // return solveTab(arr, n);
        
        // space optimization:
            return solve(arr, n);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends