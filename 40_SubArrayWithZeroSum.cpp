#include <bits/stdc++.h>
using namespace std;
bool sumzero(int *arr, int n)
{
    unordered_set<int> s;

    int prefix = 0;

    for (int i = 0; i < n; i++)
    {
        prefix = prefix + arr[i];

        if (s.find(prefix) != s.end())
        {
            return true;
        }
        if (prefix == 0)
        {
            return true;
        }
        s.insert(prefix);
    }
    return false;
}

int main()
{
    int arr[] = {1, 14, 13, -3, -10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << sumzero(arr, n);

    return 0;
}