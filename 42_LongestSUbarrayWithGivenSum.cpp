#include <bits/stdc++.h>
using namespace std;
bool longestsubarray(int *arr, int n, int sum)
{
    unordered_map<int, int> m;

    int pre_sum = 0;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        pre_sum += arr[i];

        if (pre_sum == sum)
        {
            res = i + 1;
        }
        if (m.find(pre_sum) != m.end())
        {
        }
    }
}

int main()
{
    int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << longestsubarray(arr, n, 4);

    return 0;
}