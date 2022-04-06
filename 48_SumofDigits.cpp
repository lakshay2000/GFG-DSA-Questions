#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{

    if (n <= 0)
    {
        return 0;
    }

    int digit = n % 10;
    n = n / 10;

    int sum = 0;

    sum = digit + sumOfDigits(n);

    return sum;
}

int main()
{
    int n = 254;

    cout << sumOfDigits(n);

    return 0;
}