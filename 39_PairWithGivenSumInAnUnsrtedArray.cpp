#include <bits/stdc++.h>
using namespace std;

bool pairsum(int *arr, int n, int sum)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int final = sum - arr[i];
        if (final == arr[i])
        {
            continue;
        }
        else
        {

            if (s.find(final) != s.end())
            {
                return true;
            }
        }
    }
    return false;
}

bool anotherpairsum(int *arr, int n, int sum)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        if (s.find(sum - arr[i]) != s.end())
        {
            return true;
        }
        else
        {
            s.insert(arr[i]);
        }
    }
    return false;
}

int main()
{

    int arr[] = {8, 3, 4, 2, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;

    cout << pairsum(arr, n, sum) << endl;
    cout << anotherpairsum(arr, n, sum) << endl;

    return 0;
}