#include <bits/stdc++.h>
using namespace std;
int longestEvenOdd(int *arr, int n)
{
    int count = 1;
    int maxcount = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 != 0)
        {
            count++;
        }
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0)
        {
            count++;
        }
        if (arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)
        {
            count = 1;
        }
        if (arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)
        {
            count = 1;
        }
        maxcount = max(maxcount, count);
    }
    return maxcount;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 9};
    int arr1[] = {1, 2, 3, 4, 5, 7, 9};

    // int n = 5;
    int n1 = 7;

    cout << longestEvenOdd(arr, n1) << endl;
    // cout << longestEvenOdd(arr1, n1) << endl;

    return 0;
}