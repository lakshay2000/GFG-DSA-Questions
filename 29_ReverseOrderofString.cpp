#include <bits/stdc++.h>
using namespace std;

void print(string s, int i, int j)
{
    for (int k = i; k <= j; k++)
    {
        cout << s[k];
    }
}

void reverse(string s, int n)
{
    int i = n - 1;
    int j = n - 1;

    while (i >= 0)
    {
        if (s[i] == ' ')
        {
            print(s, i, j);
            i--;
            j = i;
        }
        else
        {
            i--;
        }
        if (i == 0)
        {
            for (int k = 0; k <= j; k++)
            {
                cout << s[k];
            }
        }
    }
}

void order_reverse(string &s, int n)
{
    int start = 0;

    for (int endl = 0; endl < n; endl++)
    {
        if (s[endl] == ' ')
        {
            reverse(s.begin() + start, s.begin() + endl);
            start = endl + 1;
        }
    }
    reverse(s.begin() + start, s.end());

    reverse(s.begin(), s.end());
}

int main()
{
    string s = "I love coding";

    int n = s.length();

    // reverse(s, n);
    cout << s;

    order_reverse(s, n);

    cout << endl;
    cout << s;

    return 0;
}