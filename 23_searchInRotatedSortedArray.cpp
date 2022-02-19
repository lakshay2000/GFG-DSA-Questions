#include <iostream>
using namespace std;

int search(int *arr, int n, int x)
{
    int s = 0;
    int e = n - 1;

    while (arr[s] > arr[e])
    {
        if (arr[e] == x)
        {
            return e;
        }
        else
        {
            e--;
        }
    }

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int searchFast(int *arr, int n, int x)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[s] < arr[mid])
        {
            // left part sorted
            if (arr[s] <= x && arr[mid] > x)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            // right part sorted
            if (arr[mid] < x && arr[e] >= x)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {100, 500, 10, 20, 30, 40, 50};
    int n = 7;

    // cout << search(arr, n, 30);
    cout << searchFast(arr, n, 30);

    return 0;
}