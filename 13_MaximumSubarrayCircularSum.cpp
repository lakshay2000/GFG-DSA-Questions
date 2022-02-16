#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int *arr, int n)
{
    int maxsum = arr[0];
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        maxsum = max(curr, maxsum);

        if (curr < 0)
        {
            curr = 0;
        }
    }
    return maxsum;
}

int maximumSubarrayCircularSum(int *arr, int n)
{
    int normalsum = maxSubArray(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    int updated = maxSubArray(arr, n);

    int circularsum = (totalsum + updated);

    return max(circularsum, normalsum);
}

int main()
{
    int arr[] = {3, -4, 5, 6, -8, 7};
    int n = 6;

    cout << maximumSubarrayCircularSum(arr, n);

    return 0;
}