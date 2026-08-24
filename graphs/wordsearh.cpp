#include <iostream>
class Solution
{
private:
    bool dfs(vector<vector<char>> &board, string word, int r, int c,
             vector<vector<int>> &visited, int indx)
    {
        if (indx == word.length())
        {
            return true;
        }
        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() ||
            visited[r][c] == 1 || board[r][c] != word[indx])
        {
            return false;
        }
        visited[r][c] = 1;
        bool find_word = dfs(board, word, r + 1, c, visited, indx + 1) ||
                         dfs(board, word, r - 1, c, visited, indx + 1) ||
                         dfs(board, word, r, c + 1, visited, indx + 1) ||
                         dfs(board, word, r, c - 1, visited, indx + 1);
        visited[r][c] = 0;
        return find_word;
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int r = board.size();
        int c = board[0].size();
        vector<vector<int>> visited(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (board[i][j] == word[0] &&
                    dfs(board, word, i, j, visited, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};