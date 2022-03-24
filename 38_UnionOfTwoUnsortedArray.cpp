#include <bits/stdc++.h>
using namespace std;

int union1(int arr1[], int arr2[], int n, int m)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    for (auto i : s)
    {
        cout << i << endl;
    }
    return s.size();
}

int main()
{
    int arr1[] = {15, 20, 5, 15};
    int arr2[] = {15, 15, 15, 20, 10};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << union1(arr1, arr2, n, m);
}
