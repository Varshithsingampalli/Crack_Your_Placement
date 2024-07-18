class Solution {
public:
    int uniquePaths(int n, int m) {
        vector<vector<int>> arr;
        arr = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        arr[1][1] = 1;
        long long int mod = 2000000000;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= m; j++)
            {
                if(i==0 || j==0) arr[i][j] = 0;
                else if(i==1 && j==1) continue;
                else
                {
                    arr[i][j] = arr[i-1][j] + arr[i][j-1];
                    arr[i][j]%=mod;
                }   
            }
        }
       
        return arr[n][m];
    }
};
