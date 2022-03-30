#include <bits/stdc++.h>
using namespace std;
bool sumzero(int *arr, int n, int sum)
{
    int right = 0;
    int left = 0;
    int curr = 0;
    curr += arr[0];
    for (int i = 0; i < n; i++)
    {
        if (curr == sum)
        {
            return true;
        }
        if (curr < sum)
        {

            ++left;
            curr += arr[left];
        }
        else
        {
            curr -= arr[right];
            ++right;
        }
    }
    return false;
}

bool morebenifit(int *arr, int n, int sum)
{
    int presum = 0;
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        if (presum == sum)
        {
            return true;
        }
        if (s.find(presum - sum) != s.end())
        {
            return true;
        }
        s.insert(presum);
    }
    return false;
}

int main()
{
    int arr[] = {3, 1, 0, 1, 8, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << sumzero(arr, n, 5);
    cout << morebenifit(arr, n, 19);

    return 0;
}