#include <bits/stdc++.h>
using namespace std;

int longestconcecutive(int *arr, int n)
{
    unordered_set<int> s(arr, arr + n);

    int res = 1;

    for (auto x : s)
    {
        if (s.find(x - 1) == s.end())
        {
            int curr = 1;
            while (s.find(x + curr) != s.end())
            {
                curr++;
            }
            res = max(res, curr);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 3, 9, 2, 8, 2};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << longestconcecutive(arr, n);

    return 0;
}