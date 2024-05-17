class Solution {
public:
    int fib(int n) {

        int curr;

        int prev1 = 1;
        int prev2 = 0;

        if(n == 0)
            return prev2;

        for(int i=2; i<=n; i++)
        {
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};