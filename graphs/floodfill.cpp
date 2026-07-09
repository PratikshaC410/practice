class Solution
{
public:
    void dfs(vector<vector<int>> &image, int r, int c,
             int originalColor, int newColor)
    {

        int rows = image.size();
        int cols = image[0].size();

        if (r < 0 || r >= rows || c < 0 || c >= cols)
            return;

        if (image[r][c] != originalColor)
            return;

        image[r][c] = newColor;

        dfs(image, r - 1, c, originalColor, newColor); // up
        dfs(image, r + 1, c, originalColor, newColor); // down
        dfs(image, r, c - 1, originalColor, newColor); // left
        dfs(image, r, c + 1, originalColor, newColor); // right
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image,
                                  int sr, int sc, int color)
    {

        int originalColor = image[sr][sc];

        if (originalColor == color)
            return image;

        dfs(image, sr, sc, originalColor, color);

        return image;
    }
};