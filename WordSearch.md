# Problem Statement
Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.


```
board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.

```


# Solution in Java
```Java
class Solution {
    public boolean exist(char[][] board, String word) {
        for(int i = 0; i<board.length; i++){
            for(int j = 0; j < board[i].length; j++){
                if(board[i][j] == word.charAt(0)){
                    if(dfs(board, i, j, 0, word))
                        return true;
                }
            }
        }
        
        return false;
    }
    
    
    public boolean dfs(char[][]board, int i, int j, int position, String word){
        if(position == word.length()){
            return true;
        }
        
        if(i < 0 || i >= board.length || j < 0 || j >= board[i].length || board[i][j] != word.charAt(position)){
            return false;
        }
        
        char temp = board[i][j];
        
        board[i][j] = ' ';
        //since we dont want to revisit the same character again we will mark it.

        boolean found = dfs(board, i-1, j, position+1, word)
            || dfs(board, i+1, j, position+1, word)
            || dfs(board, i, j-1, position+1, word) 
            || dfs(board, i, j+1, position+1, word);
        
        board[i][j] = temp;
        //to restore the board we had saved the marked character and now we replace it back.
        
        return found;
    }
}
```


[Link to Problem](https://leetcode.com/problems/word-search/)
