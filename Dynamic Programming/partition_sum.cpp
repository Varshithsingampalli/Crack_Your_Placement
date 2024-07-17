class Solution {
public:
    int dp[205][20005];
     int fn(vector<int>&a, int i,int sum){
        if(sum==0)return 1;
        if(i==a.size())return 0;
        int ans=0;
        if(dp[i][sum]!=-1)return dp[i][sum];
        if(sum>=a[i])ans|=fn(a,i+1,sum-a[i]);
                     ans|=fn(a,i+1,sum);
        return dp[i][sum]=ans;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto i : nums) sum+=i;
        if(sum%2) return false;
        memset(dp,-1,sizeof(dp));
        return fn(nums, 0, sum/2);
    }
};
