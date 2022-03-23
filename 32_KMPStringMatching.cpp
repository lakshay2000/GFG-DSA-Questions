// O(N) TC
// O(m) SC

#include <bits/stdc++.h>
using namespace std;

void lps2(string s, int lst[], int n)
{
    lst[0] = 0;
    int len = 0;

    int i = 1;

    while (i < n)
    {
        if (s[i] == s[len])
        {
            lst[i] = len + 1;
            len++;
            i++;
        }
        else
        {
            if (len == 0)
            {
                lst[i] = 0;
                i++;
            }
            else
            {
                len = lst[len - 1];
            }
        }
    }
}

void kmp(string pat, string txt, int lst[])
{
    int n = txt.length();
    int m = pat.length();

    int i = 0;
    int j = 0;
    while (i < n)
    {
        if (pat[j] == txt[i])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            cout << i - j;
            j = lst[j - 1];
        }
        else if (i < n && pat[j] != txt[i])
        {
            if (j = 0)
            {
                i++;
            }
            else
            {
                j = lst[j - 1];
            }
        }
    }
}

int main()
{
    string txt = "ababcababaad";
    string pat = "ababa";

    int *lst = new int[pat.length()];

    lps2(pat, lst, pat.length());

    for (int i = 0; i < pat.length(); i++)
    {
        cout << lst[i] << " ";
    }

    kmp(pat, txt, lst);

    return 0;
}