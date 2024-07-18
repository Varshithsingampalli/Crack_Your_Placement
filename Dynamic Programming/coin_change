class Solution {
    vector<int> dp;
    int cc(vector<int>& den ,long long int cur , int a)
    {
        if(cur==a) return 0;
        if(cur > a) return -1;
        if(dp[cur]!=0) return dp[cur];
        int ans = INT_MAX , pic = INT_MAX;
        for(int i = 0 ; i < den.size() ; i++)
        {
             if(cc(den , cur+den[i] , a)!=-1) pic = 1+cc(den , cur+den[i] , a);
             ans = min(ans , pic);
        }
        dp[cur] = ans;
        if(ans==INT_MAX) dp[cur] = -1;
        return dp[cur];
    }
public:
    int coinChange(vector<int>& c, int a) {
        dp = vector<int>(10001 , 0); 
        if(a==0) return 0;
        return cc(c , 0 , a);
    }
};
