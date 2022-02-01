#include <iostream>
using namespace std;

// Left Rotate by d rotations
// TC-O(N^2)
void leftRotate(int *arr, int n, int d)
{
    while (d > 0)
    {

        int temp = arr[0];

        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        d--;
    }
}

void reverse(int *arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

// TC - O(N);
void leftRotate1(int *arr, int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = 5;
    int d = 2;

    // solve(arr, n);

    leftRotate1(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}