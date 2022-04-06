#include <bits/stdc++.h>
using namespace std;
int longestsubarray(int *arr, int n)
{
    unordered_map<int, int> m;

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
    }

    int prefix = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];

        if (prefix == sum)
        {
            res = i + 1;
        }
        if (m.find(prefix) == m.end())
        {
            m.insert({prefix, i});
        }
        if (m.find(prefix - sum) != m.end())
        {
            res = max(res, i - m[prefix - sum]);
        }
    }
    return res;
}

int main()
{
    int arr[] = {0, 1, 0, 0, 1, 1, 0, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << longestsubarray(arr, n);

    return 0;
}