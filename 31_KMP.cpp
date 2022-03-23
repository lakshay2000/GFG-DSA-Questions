#include <bits/stdc++.h>
using namespace std;

// O(n^3)
int longprefixSuffix(string s, int n)
{
    for (int len = n - 1; len > 0; len--)
    {
        bool flag = true;

        for (int i = 0; i < len; i++)
        {
            if (s[i] != s[n - len + i])
            {
                flag = false;
            }
        }
        if (flag == true)
        {
            return len;
        }
    }
    return 0;
}

void lps(string s, int lst[], int n)
{
    for (int i = 0; i < n; i++)
    {
        lst[i] = longprefixSuffix(s, i + 1);
    }
}

// O(N)

// Case 1) -> if str[i] and str[len] match
//             then lps[i]=len+1; len++
// Case 2) -> If str[i] and str[len] DO NOT MATCH
//             a) if len=0
//                 lps[i]=0
//             b) else
//                 len=lps[len-1]
//                     We now compare str[i] and str[len]

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

int main()
{

    string s = "ababa";

    int n = s.length();

    int *lst = new int[n];

    lps2(s, lst, n);

    for (int i = 0; i < n; i++)
    {
        cout << lst[i] << " ";
    }

    return 0;
}