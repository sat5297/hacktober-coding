# Problem Statement

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police

```
Input: [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
             Total amount you can rob = 1 + 3 = 4.
```

```
Input: [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
             Total amount you can rob = 2 + 9 + 1 = 12.
```



# Solution in Java
```Java
class Solution {
    public int rob(int[] nums) {
        if(nums.length == 0) return 0;
        int[] dp = new int[nums.length];
        dp[0] = nums[0]; //only one house
        if(nums.length == 1) return dp[0];
        dp[1] = Math.max(nums[0], nums[1]); //two houses
        for(int i = 2; i < nums.length; i++){
            dp[i] = Math.max(nums[i] + dp[i-2], dp[i-1]);
            //either rob or skip the current house.
        }
        return dp[nums.length - 1];
    }
}
```

[Link to Problem](https://leetcode.com/problems/house-robber/)
