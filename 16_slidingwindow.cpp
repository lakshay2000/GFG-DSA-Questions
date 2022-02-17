#include <iostream>
using namespace std;

int slidingwindow(int *arr, int n, int k)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;
    for (int i = k; i < n; i++)
    {
        sum += (arr[i] - arr[i - k]);

        maxsum = max(sum, maxsum);
    }
    return maxsum;
}
bool slidingwindowFast(int *arr, int n, int k, int total)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxsum = sum;
    for (int i = k; i < n; i++)
    {
        sum += (arr[i] - arr[i - k]);

        if (sum == total)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int n = 6;
    int k = 3;

    cout << slidingwindow(arr, n, k) << endl;

    if (slidingwindowFast(arr, n, k, 44))
    {
        cout << "Sum hai bhai" << endl;
    }
    else
    {
        cout << "Nahi hai" << endl;
    }

    return 0;
}