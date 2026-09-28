
class Solution
{
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix)
    {
        unordered_map<string, int> patternCount;
        int maxRows = 0;

        for (const auto &row : matrix)
        {
            string canonicalPattern = "";
            int firstVal = row[0];

            for (int val : row)
            {
                canonicalPattern += (val == firstVal ? '0' : '1');
            }

            patternCount[canonicalPattern]++;
            maxRows = max(maxRows, patternCount[canonicalPattern]);
        }

        return maxRows;
    }
};