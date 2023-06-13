#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    int R, M;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        if (mpp.find(arr[i]) != mpp.end())
        {
            R = arr[i];
        }
        else
        {
            mpp[arr[i]] = i;
        }
    }
    int ans = arr[0] ^ 1;
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ arr[i] ^ (i + 1);
    }
    ans = ans ^ R;
    M = ans;
    return {M, R};
    // Write your code here
}
