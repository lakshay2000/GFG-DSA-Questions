#include <bits/stdc++.h>
using namespace std;
int maxSubArray(int *arr, int n)
{
    int maxsum = arr[0];

    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            maxsum = max(curr, maxsum);
        }
    }

    return maxsum;
}

int main()
{
    int arr[] = {-6, -1, -8};

    int n = 3;

    cout << maxSubArray(arr, n);

    return 0;
}