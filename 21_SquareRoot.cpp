#include <iostream>
using namespace std;

int squareroot(int n)
{
    int s = 0;
    int e = n - 1;
    int ans1 = 0;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int ans = mid * mid;

        if (ans == n)
        {
            return mid;
        }
        else if (ans > n)
        {
            e = mid - 1;
        }
        else
        {
            ans1 = mid;
            s = mid + 1;
        }
    }
    return ans1;
}

int main()
{
    int n = 3;

    cout << squareroot(n);

    return 0;
}