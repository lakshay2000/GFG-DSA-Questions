#include <bits/stdc++.h>
using namespace std;

int majorityelements(int *arr, int n)
{
    sort(arr, arr + n);
    int count = 1;
    int maxcount = 1;
    int ans;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count > maxcount)
        {
            maxcount = count;
            ans = arr[i];
        }
    }
    if (maxcount > n / 2)
    {
        return ans;
    }
    return -1;
}

int majorityindex_1(int *arr, int n)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return res;
    }
    return -1;
}

int main()
{
    int arr[] = {8, 3, 4, 8, 8};
    int n = 5;

    // cout << majorityelements(arr, n) << endl;
    cout << majorityindex_1(arr, n) << endl;

    return 0;
}