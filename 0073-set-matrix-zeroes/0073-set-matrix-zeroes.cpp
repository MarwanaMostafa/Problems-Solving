class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
    vector<int> column;
    for (int i = 0; i < matrix.size(); i++)
        for (int j = 0; j < matrix[i].size(); j++)
            if (matrix[i][j] == 0)
            {
                row.push_back(i);
                column.push_back(j);
            }
    int temp = 0;
    for (int i = 0; i < row.size(); i++)
    {
        temp = row[i];
        for (int j = 0; j < matrix[temp].size(); j++)
            matrix[temp][j] = 0;
    }
    for (int i = 0; i < column.size(); i++)
    {
        temp = column[i];
        for (int j = 0; j < matrix.size(); j++)
            matrix[j][temp] = 0;
    }
    }
};