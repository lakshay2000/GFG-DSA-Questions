#include <bits/stdc++.h>
using namespace std;

int intersection(int arr1[], int arr2[], int n, int m)
{
    unordered_set<int> s(arr1, arr1 + n);
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (s.find(arr2[i]) != s.end())
        {
            res++;
            cout << arr2[i] << endl;
            s.erase(arr2[i]);
        }
    }
    return res;
}

int main()
{
    int arr1[] = {10, 15, 20, 5, 30};

    int arr2[] = {30, 5, 3, 80};

    cout << intersection(arr1, arr2, 5, 4);
    // cout << ;

    return 0;
}