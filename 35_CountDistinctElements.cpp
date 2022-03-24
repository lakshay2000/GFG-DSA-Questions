#include <bits/stdc++.h>
using namespace std;

int distinct(int arr[], int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    return s.size();
}

int main()
{
    int arr[] = {15, 12, 13, 12, 13, 13, 18};

    int n = 7;

    cout << distinct(arr, n);
    return 0;
}