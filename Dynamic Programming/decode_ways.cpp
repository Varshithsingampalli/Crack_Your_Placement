class Solution {
public:
vector<int> dp;
int dw(string s, int n, int i)
{
    if(i==n) return 1;
    if(i>n) return 0;
    if(dp[i]!=-1) return dp[i];
    int k = s[i]-'0';
    if(k<1 || k>26) return -1;
    int no_pick = 0;
    if(dw(s, n, i+1)!=-1) no_pick = dw(s, n, i+1);
    int pick = 0;
    int l = s[i+1]-'0';
    k*=10;
    k+=l;
    if(k>=1 && k<=26 && dw(s, n, i+2)!=-1) pick = dw(s, n, i+2);
    return dp[i]=pick + no_pick;
}
    int numDecodings(string s) {
        dp = vector<int>(s.size(), -1);
        int ans =  dw(s, s.size(), 0);
        if(ans==-1) return 0;
        return ans;
    }
};
