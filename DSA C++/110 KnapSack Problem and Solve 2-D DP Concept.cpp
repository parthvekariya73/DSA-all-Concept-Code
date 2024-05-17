//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    
    int solveRes(int *weight, int *value, int index, int capacity)
    {
        // base case
        // right to left movement
        if(weight[0] <= capacity) 
            return value[0];
        else 
            return 0;
            
        
        int include = 0;
        if(weight[index] <= capacity) 
            include = value[index] + solveRes(weight, value, index-1, capacity-weight[index]);
        
        int exclude = 0 + solveRes(weight, value, index-1, capacity);
        
        int ans = max(include, exclude);
        return ans;
    }
 
   int solveMem(int *weight, int *value, int index, int capacity, vector<vector<int> > &dp)
    {
        // base case
        // right to left movement
        if(index == 0) {
            if(weight[0] <= capacity) 
                return value[0];
            else 
                return 0;
        }
            
        if(dp[index][capacity] != -1) 
            return dp[index][capacity];
        
        int include = 0;
        if(weight[index] <= capacity) 
            include = value[index] + solveMem(weight, value, index-1, capacity-weight[index], dp);
        
        int exclude = 0 + solveMem(weight, value, index-1, capacity, dp);
        
        dp[index][capacity] = max(include, exclude);
        return dp[index][capacity];
    }
 
    int solveTab(int *weight, int *value, int n, int capacity)
    {
    
        // step 1
        vector<vector<int> > dp(n, vector<int>(capacity+1, 0));
        
        // step 2 : Base case
        for(int i = weight[0]; i<=capacity; i++) {
            if(weight[0] <= capacity)
                dp[0][i] = value[0];
            else
                dp[0][i] = 0;
        }
        
        // step 3 
        for(int index = 1; index<n; index++) {
            for(int w = 0; w<=capacity; w++) {
                
                int include = 0;
                
                if(weight[index] <= w)
                    include = value[index] + dp[index-1][w-weight[index]];
                
                int exclude = 0 + dp[index-1][w];
                
                dp[index][w] = max(exclude, include);
            }
        }
        
        return dp[n-1][capacity];
    }
    
    
    int solve(int *weight, int *value, int n, int capacity)
    {
    
        // step 1
        vector<int> prev(capacity+1, 0);
        vector<int> curr(capacity+1, 0);
        
        // step 2 : Base case
        for(int w = weight[0]; w<=capacity; w++) {
            if(weight[0] <= capacity)
                prev[w] = value[0];
            else
                prev[w] = 0;
        }
        
        // step 3 
        for(int index = 1; index<n; index++) {
            for(int w = 0; w<=capacity; w++) {
                
                int include = 0;
                
                if(weight[index] <= w)
                    include = value[index] + prev[w-weight[index]];
                
                int exclude = 0 + prev[w];
                
                curr[w] = max(exclude, include);
            }
            prev = curr;
        }
        
        return prev[capacity];
    }
    
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        // Recursion
        // return solveRes(wt, val, n-1, W);
    
        // recursion + Memoization :
        // vector<vector<int> > dp(n, vector<int>(W+1, -1));
        // return solveMem(wt, val, n-1, W, dp);
        
        // Tablulation :
        // return solveTab(wt, val, n-1, W);
        
        // space optimazation :
        return solve(wt, val, n, W);
        
        
    }
    
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends