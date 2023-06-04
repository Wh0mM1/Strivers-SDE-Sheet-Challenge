#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    bool check[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            check[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    check[k][j] = true;
                }
                for (int k = 0; k < m; k++)
                {
                    check[i][k] = true;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check[i][j] == true)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // Write your code here.
}