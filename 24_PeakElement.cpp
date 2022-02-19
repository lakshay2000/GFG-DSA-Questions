#include <iostream>
using namespace std;

int peak(int *arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if ((mid == 0 || arr[mid] >= arr[mid - 1]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
        {
            return arr[mid];
        }
        else if (mid > 0 && arr[mid] <= arr[mid - 1])
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

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    cout << peak(arr, n);

    return 0;
}