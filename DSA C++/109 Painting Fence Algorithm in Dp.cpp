//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends


class Solution{

    long long add(int a, int b) {
        return ( (a%1000000007) + (b%1000000007) )%1000000007;
    }
    
    long long mul(int a, int b) {
        return ( (a%1000000007) * 1LL * (b%1000000007) )%1000000007;
    }
    
    long long solve(int n, int k) {
        // base case
        if(n==1)
            return k;
        if(n==2)
            return add(k, mul(k, k-1));
            
        long long ans = add( mul(solve(n-2,k), k-1), mul(solve(n-1,k), k-1) );
        return ans;
    }


    long long solveMem(int n, int k, vector<long long>&dp) {
        // base case
        if(n==1)
            return k;
        if(n==2)
            return add(k, mul(k, k-1));
        if(dp[n] != -1)
            return dp[n];
            
        dp[n] = add( mul(solveMem(n-2,k,dp), k-1), mul(solveMem(n-1,k,dp), k-1) );
        return dp[n];
    }


    long long solveTab(int n, int k) {
        vector<long long> dp(n+1,0);
        dp[1] = k;
        dp[2] = add(k, mul(k, k-1));
        
        for(int i=3; i<=n; i++) {
            dp[i] = add( mul(dp[i-2],k-1), mul(dp[i-1],k-1) );
        }
        return dp[n];
    }
    
    
    long long solve2(int n, int k) {
        long long prev2 = k;
        long long prev1 = add(k, mul(k, k-1));
        
        for(int i=3; i<=n; i++) {
            long long ans = add( mul(prev2, k-1), mul(prev1, k-1) );
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    

    public:
    long long countWays(int n, int k){
        // recursion :
        // return solve(n,k);
        
        // recursion + memoization :
        // vector<long long> dp(n+1, -1);
        // return solveMem(n, k, dp);
        
        // tabulation method :
        // return solveTab(n, k);
        
        // space optimazation :
        return solve2(n,k);
        
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends