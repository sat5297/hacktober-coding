# Problem Statement
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

Now consider if some obstacles are added to the grids. How many unique paths would there be?


An obstacle and empty space is marked as 1 and 0 respectively in the grid.

Note: m and n will be at most 100.

```
Input:
[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
Output: 2
Explanation:
There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
```

# Solution in Java

```Java

class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int m = obstacleGrid.length;
        int n = obstacleGrid[m-1].length;
        
        // m-1 and n-1
        
        int[][] dp = new int[m][n];
        if(obstacleGrid[0][0] == 1)
            return 0;
        
        dp[0][0] = 1;
        
        for(int i = 1; i < m; i++){
            dp[i][0] = obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
        }
        
        for(int j = 1; j < n; j++){
            dp[0][j] = obstacleGrid[0][j] == 1 ? 0 : dp[0][j-1];
        }
        
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                dp[i][j] = obstacleGrid[i][j] == 1 ? 0 : dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
}

```
