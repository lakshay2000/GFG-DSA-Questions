#include <iostream>
using namespace std;

bool equilibrium(int *arr, int n)
{
    int l_sum = 0;
    int t_sum = 0;

    for (int i = 0; i < n; i++)
    {
        t_sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (l_sum == t_sum - arr[i])
        {
            return true;
        }
        l_sum += arr[i];
    }
    return false;
}
int main()
{
    int arr[] = {3, 4, 8, -9, 20, 6};

    int n = 6;

    equilibrium(arr, n);

    return 0;
}