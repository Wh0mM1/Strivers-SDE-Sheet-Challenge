#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int minNum = INT_MAX, ans = INT_MIN;
    for (int i = 0; i < prices.size(); i++)
    {
        minNum = min(minNum, prices[i]);
        ans = max(ans, prices[i] - minNum);
    }
    return ans;
    // Write your code here.
}