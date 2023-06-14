#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> arr)
{
    map<long long, int> mpp;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - 0;
        if (mpp.find(rem) != mpp.end())
        {
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        if (mpp.find(sum) == mpp.end())
        {
            mpp[sum] = i;
        }
    }
    return maxLen;
    // Write your code here
}