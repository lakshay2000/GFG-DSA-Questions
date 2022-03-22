#include <iostream>
using namespace std;

int getPivot(int *arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int binarySearch(int *arr, int s, int e, int key)
{
    int start = s;
    int end = e;
    // int mid=(start+end)/2;
    int mid = start + (end - start) / 2;
    //  optimised way
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        // mid=(start+end)/2;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPos(int *arr, int n, int k)
{
    int pivot = getPivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, pivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {100, 500, 10, 20, 30, 40, 50};
    int n = 7;

    // cout << search(arr, n, 30);
    cout << findPos(arr, n, 30);

    return 0;
}