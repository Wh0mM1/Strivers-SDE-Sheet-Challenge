#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        if (mpp[arr[i]] > n / 2)
        {
            return arr[i];
        }
    }

    return -1;
    // Write your code here.
}