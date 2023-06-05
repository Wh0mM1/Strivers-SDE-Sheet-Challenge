#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> arr;
    for (int i = 0; i < m; i++)
    {
        arr.push_back(arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        arr.push_back(arr2[i]);
    }
    sort(arr.begin(), arr.end());
    return arr;
    // Write your code here.
}