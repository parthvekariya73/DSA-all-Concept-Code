class Solution {

    long long int solve(vector<int> &nums)
    {
        int n = nums.size();

        long long int prev2 = 0;
        long long int prev1 = nums[0];
        
        for(int i=1; i<n; i++)
        {
            long long int incl = nums[i];
            if(i > 1)
                incl = incl + prev2;

            long long int excl = prev1 + 0;
            long long int ans = max(incl, excl);        
            prev2 = prev1;
            prev1 = ans;
        }
        
        return prev1;
    }

public:
    int rob(vector<int>& nums) {

        return solve(nums);
    }
};