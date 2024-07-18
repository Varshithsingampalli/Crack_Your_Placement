class Solution {
public:
vector<int> dp;
    int dpf(int n)
    {
        if(n==1 || n==2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = dpf(n-2) + dpf(n-1);
    }
    int climbStairs(int n) {
        dp.resize(n+1, -1);
        return dpf(n);
    }
};
