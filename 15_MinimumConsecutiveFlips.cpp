#include <iostream>
using namespace std;
void minimum(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << endl;
            }
        }
    }
    if (arr[0] != arr[n - 1])
    {
        cout << (n - 1) << endl;
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0};
    int arr1[] = {0, 0, 1, 1};
    int n = 9;
    int n1 = 4;

    // minimum(arr, n);
    minimum(arr1, n1);

    return 0;
}