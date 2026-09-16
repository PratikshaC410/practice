class Solution
{
public:
    int countLatticePoints(vector<vector<int>> &circles)
    {
        set<pair<int, int>> points;

        for (const auto &circle : circles)
        {
            int cx = circle[0];
            int cy = circle[1];
            int r = circle[2];
            int rSquared = r * r;

            for (int x = cx - r; x <= cx + r; ++x)
            {
                for (int y = cy - r; y <= cy + r; ++y)
                {
                    int dx = x - cx;
                    int dy = y - cy;
                    if (dx * dx + dy * dy <= rSquared)
                    {
                        points.insert({x, y});
                    }
                }
            }
        }

        return points.size();
    }
};