#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(arr[i]) != mpp.end())
        {
            return arr[i];
        }
        mpp[arr[i]] = i;
    }
    return 0;
    // Write your code here.
}
