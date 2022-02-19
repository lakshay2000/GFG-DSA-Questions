#include <iostream>
using namespace std;
int count(int *arr, int n)
{
    int s = 0;
    int ans = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == 0)
        {
            s = mid + 1;
        }
        else
        {
            if (arr[mid] != arr[mid - 1])
            {
                return (n - ans);
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {0, 0, 0, 0};
    int n = 4;

    cout << count(arr, n);

    return 0;
}