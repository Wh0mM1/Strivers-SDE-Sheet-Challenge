#include <bits/stdc++.h>

void merge(vector<int> &arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[i + left];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = left;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

int countPair(vector<int> &arr, int low, int mid, int high)
{
    int right = mid + 1;
    int count = 0;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && arr[i] > 2 * arr[right])
            right++;
        count += (right - (mid + 1));
    }
    return count;
}

int mergeSort(vector<int> &arr, int left, int right)
{
    int count = 0;
    if (left >= right)
        return count;
    int mid = (left + right) / 2;
    count += mergeSort(arr, left, mid);
    count += mergeSort(arr, mid + 1, right);
    count += countPair(arr, left, mid, right);
    merge(arr, left, mid, right);
    return count;
}

int reversePairs(vector<int> &arr, int n)
{
    int count = mergeSort(arr, 0, n - 1);
    return count;
    // Write your code here.
}