
// optimal solution
#include <bits/stdc++.h>
int uniquePaths(int m, int n)
{
    int N = m + n - 2;
    int r = n - 1;
    double res = 1;
    for (int i = 1; i <= r; i++)
    {
        res = res * (N - r + i) / (i);
    }
    return (int)res;
    // Write your code here.
}

// dp solution
class Solution
{
public:
    int countInversions(int i, int j, int m, int n, vector<vector<int>> &dp)
    {
        if (i == (m - 1) && j == (n - 1))
        {
            return 1;
        }
        if (i >= m || j >= n)
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        else
        {
            return dp[i][j] = countInversions(i, j + 1, m, n, dp) + countInversions(i + 1, j, m, n, dp);
        }
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp;
        for (int i = 0; i < m; i++)
        {
            vector<int> level;
            for (int j = 0; j < n; j++)
            {
                level.push_back(-1);
            }
            dp.push_back(level);
        }
        return countInversions(0, 0, m, n, dp);
    }
};

// recursion
class Solution
{
public:
    int countInversions(int i, int j, int m, int n)
    {
        if (i == (m - 1) && j == (n - 1))
        {
            return 1;
        }
        if (i >= m || j >= n)
        {
            return 0;
        }
        else
        {
            return countInversions(i, j + 1, m, n) + countInversions(i + 1, j, m, n);
        }
    }
    int uniquePaths(int m, int n)
    {
        return countInversions(0, 0, m, n);
    }
};
