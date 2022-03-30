#include <bits/stdc++.h>
using namespace std;

void morethan(int *arr, int n, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

        for (auto x : m)
    {
        if (x.second > n / k)
        {
            cout << x.first << " ";
        }
    }
}

int main()
{
    int arr[] = {30, 10, 20, 20, 10, 20, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    morethan(arr, n, 4);

    return 0;
}