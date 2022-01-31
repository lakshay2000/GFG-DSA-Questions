// Second Largest Element

#include <iostream>
using namespace std;

// ONE TRAVERSAL

int secondlargest(int *arr, int n)
{
    int res = -1;
    int largest = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[res] < arr[i])
            {
                res = i;
            }
        }
    }
    return res;
}

// TWO TRAVERSAL
int largestelement(int arr[], int n)
{

    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

int solve(int arr[], int n)
{
    int larg = largestelement(arr, n);
    int res = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[larg])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int arr[] = {5, 20, 12, 20, 13};

    int n = 5;

    // Two Traversal
    cout << solve(arr, n) << endl;
    // Two Traversal
    cout << secondlargest(arr, n) << endl;

    return 0;
}