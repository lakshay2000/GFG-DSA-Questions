#include <iostream>
using namespace std;

void zeroAttheEnd(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 0 && arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if (arr[i] == 0 && arr[j] == 0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[] = {10, 20};

    int n = 2;

    // solve(arr, n);

    zeroAttheEnd(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}