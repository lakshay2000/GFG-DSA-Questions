#include <iostream>
using namespace std;

int maximum(int *arr, int n)
{
    int count = 0;
    int maxcunt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] + arr[i + 1] == 2)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maxcunt = max(count, maxcunt) + 1;
    }

    int count0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else
        {
            break;
        }
    }
    if (count0 == n)
    {
        maxcunt = 0;
    }

    return maxcunt;
}

int main()
{

    int arr[] = {0, 0, 0, 0};

    int n = 4;

    cout << maximum(arr, n);
    // cout << "hello";

    return 0;
}