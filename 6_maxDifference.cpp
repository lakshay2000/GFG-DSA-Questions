#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int maxindex(int arr[], int n)
{
    int maxi = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxi])
        {
            maxi = i;
        }
    }

    return maxi;
}

int MaxDifference(int arr[], int n)
{
    int maxi = maxindex(arr, n);
    // cout << maxi;
    int curr = INT_MIN;

    for (int i = 0; i < maxi; i++)
    {
        if (maxi == 0)
        {
            break;
        }
        int ans = arr[maxi] - arr[i];
        if (ans > curr)
        {
            curr = ans;
        }
    }
    return curr;
}

int maxDifference(int *arr, int n)
{
    int res = arr[1] - arr[0];
    int minval = arr[0];

    for (int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minval);
        minval = min(minval, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {30, 10, 8, 2};

    int n = 4;

    // solve(arr, n);

    // cout << MaxDifference(arr, n);
    cout << maxDifference(arr, n);
    return 0;
}