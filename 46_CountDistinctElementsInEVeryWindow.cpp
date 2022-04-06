#include <bits/stdc++.h>
using namespace std;

void countdistinct(int *arr, int n, int k)
{

    for (int i = 0; i < n - k + i + 1; i++)
    {
        if (i == n - k + 1)
        {
            break;
        }
        unordered_set<int> s(arr + i, arr + k + i);

        cout << s.size() << " ";
    }
}

void countdistinctbetter(int *arr, int n, int k)
{
    unordered_map<int, int> m;

    int dist_counts = 0;

    for (int i = 0; i < k; i++)
    {

        if (m[arr[i]] == 0)
        {
            dist_counts++;
        }
        m[arr[i]]++;
    }

    cout << dist_counts << endl;

    for (int i = k; i < n; i++)
    {
        if (m[arr[i - k]] == 1)
        {
            dist_counts--;
        }
        m[arr[i - k]] -= 1;

        if (m[arr[i]] == 0)
        {
            dist_counts += 1;
        }
        m[arr[i]]++;

        cout << dist_counts << endl;
    }
}

int main()
{
    int arr[] = {10, 10, 10, 10};

    int n = sizeof(arr) / sizeof(arr[0]);

    countdistinct(arr, n, 4);
    cout << endl;
    countdistinctbetter(arr, n, 4);

    return 0;
}