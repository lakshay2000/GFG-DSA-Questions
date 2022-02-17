// CPP program print first M terms of
// N-bonacci series.
#include <bits/stdc++.h>
using namespace std;

// Function to print bonacci series
void bonacciseries(long n, int m)
{

    // Assuming m > n.
    int arr[m] = {0};
    arr[n - 1] = {1};
    arr[n] = {1};

    for (int i = n + 1; i < m; i++)
    {
        arr[i] = 2 * arr[i - 1] - arr[i - n - 1];
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i] << " ";
    }
}

// Driver's Code
int main()
{
    int N = 3, M = 8;
    bonacciseries(N, M);
    return 0;
}