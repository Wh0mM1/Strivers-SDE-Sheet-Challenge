bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int row_start = 0, row_end = mat.size() - 1;

    while (row_start <= row_end)
    {
        int mid_row = (row_start + row_end) / 2;
        int col_start = 0, col_end = mat[mid_row].size() - 1;

        if (mat[mid_row][col_start] <= target && mat[mid_row][col_end] <= target)
        {
            while (col_start <= col_end)
            {
                int mid_col = (col_start + col_end) / 2;
                if (mat[mid_row][mid_col] == target)
                {
                    return true;
                }
                if (mat[mid_row][mid_col] < target)
                {
                    col_start = mid_col + 1;
                }
                if (mat[mid_row][mid_col] > target)
                {
                    col_end = mid_col - 1;
                }
            }
        }
        if (mat[mid_row][col_start] > target)
        {
            row_end = mid_row - 1;
        }
        else
        {
            row_start = mid_row + 1;
        }
    }
    return false;
}