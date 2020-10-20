# Problem Statement
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?

```
Input: m = 3, n = 2
Output: 3
Explanation:
From the top-left corner, there are a total of 3 ways to reach the bottom-right corner:
1. Right -> Right -> Down
2. Right -> Down -> Right
3. Down -> Right -> Right
```

```
Input: m = 7, n = 3
Output: 28
```

# Solution in Java

```Java

class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m][n];
        
        dp[0][0] = 1;
        for(int i = 0; i < m; i++)
            dp[i][0] = 1;
        
        for(int j = 0; j < n; j++)
            dp[0][j] = 1;
        
        for(int i = 1; i < m; i++)
            for(int j = 1; j < n; j++)
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
        
        
        return dp[m-1][n-1];
    }

```


## BFS Approach -> Exceeds Time Limit

```Java
class Solution {
    public int uniquePaths(int m, int n) {
        return bfs(m, n, 0, 0);
    }
    
    public int bfs(int m, int n, int i, int j){
        if(i == m-1 && j == n-1){
            return 1;
        }
        
        if(i >= m || j >= n){
            return 0;
        }
        
        return bfs(m, n, i+1, j) + bfs(m, n, i, j+1);
    }
}
```
