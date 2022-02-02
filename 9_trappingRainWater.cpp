#include <iostream>
using namespace std;

// TC-O(N^2)
int trappingwater(int *arr, int n)
{
    int res = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int lmax = arr[i];
        for (int j = 0; j < i; j++)
        {
            lmax = max(arr[j], lmax);
        }
        int rmax = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            rmax = max(arr[j], rmax);
        }

        res += (min(rmax, lmax)) - arr[i];
    }
    return res;
}

// SC-O(N)
int trappingwater1(int *arr, int n)
{
    int lmax[n];
    int rmax[n];
    int res = 0;
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for (int i = 0; i < n; i++)
    {

        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main()
{

    int arr[] = {3, 0, 1, 2, 5};
    int n = 5;

    cout << trappingwater(arr, n) << endl;
    cout << trappingwater1(arr, n) << endl;

    return 0;
}