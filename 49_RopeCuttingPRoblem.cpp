#include <bits/stdc++.h>
using namespace std;

int maxPieces(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max(maxPieces(n - a, a, b, c), max(maxPieces(n - b, a, b, c), maxPieces(n - c, a, b, c)));

    if (res == -1)
    {
        return -1;
    }
    return res + 1;
}

int main()
{

    int n = 5;
    int a = 2;
    int b = 5;
    int c = 1;

    cout << maxPieces(n, a, b, c);

    return 0;
}