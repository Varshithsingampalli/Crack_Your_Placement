class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i==0 && j==0) continue;
                int u = INT_MAX, s = INT_MAX;
                if(i!=0) u = grid[i-1][j];
                if(j!=0) s = grid[i][j-1];
                grid[i][j]+=min(s, u);
            }
        }
        return grid[n-1][m-1];
    }
};
