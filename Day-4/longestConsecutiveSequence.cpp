#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n)
{
    int count = 1;
    sort(arr.begin(), arr.end());
    int maxCount = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i - 1] + 1 == arr[i])
        {
            count++;
        }
        else if (arr[i - 1] == arr[i])
        {
            continue;
        }
        else
        {
            count = 1;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;
    // Write your code here.
}