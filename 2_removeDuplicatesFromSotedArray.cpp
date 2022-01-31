#include <iostream>
using namespace std;

int noExtraSpace(int *arr, int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return res;
}

// extra array i.e. extra space
void solve(int *arr, int n)
{
    int temp[n];

    temp[0] = arr[0];
    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30};

    int n = 6;

    // solve(arr, n);

    int ans = noExtraSpace(arr, n);

    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}