#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long currSum = arr[0], maxSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currSum += arr[i];
        if (arr[i] > currSum)
        {
            currSum = arr[i];
        }
        if (maxSum < currSum)
        {
            maxSum = currSum;
        }
    }
    if (maxSum < 0)
    {
        return 0;
    }
    return maxSum;
    /*
        Don't write main().
        Don't read input, it is passed as function argument.
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}