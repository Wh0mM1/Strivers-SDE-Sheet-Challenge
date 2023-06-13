#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    int N = arr.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > N / 3)
        {
            ans.push_back(it.first);
        }
    }
    return ans;
}