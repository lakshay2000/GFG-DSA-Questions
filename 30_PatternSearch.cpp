// Naive Approach
#include <bits/stdc++.h>
using namespace std;

void patternsearch(string &s, string &pat, int n, int m)
{
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != s[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
}

// it works only if the pattern is distinct
void patternsearch1(string &s, string &pat, int n, int m)
{
    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != s[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = i + j;
        }
    }
}

int main()
{
    string s = "geeksforgeeks";

    string pat = "eks";

    int n = s.length();
    int m = pat.length();

    patternsearch(s, pat, n, m);
    patternsearch1(s, pat, n, m);
    return 0;
}