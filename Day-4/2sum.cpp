#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> level;
                level.push_back(arr[i]);
                level.push_back(arr[j]);
                sort(level.begin(), level.end());
                ans.push_back(level);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
    // Write your code here.
}