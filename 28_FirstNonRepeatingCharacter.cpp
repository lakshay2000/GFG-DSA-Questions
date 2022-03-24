#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
// O(n^2)
int leftmost(string s1)
{
    int res = -1;
    for (int i = 0; i < s1.length(); i++)
    {
        bool ans = false;
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[i] == s1[j])
            {
                ans = true;
                break;
            }
        }
        if (ans == false)
        {

            res = i;
            return res;
        }
    }
    return -1;
}

int left(string s1)
{

    int count[CHAR] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (count[s1[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

int non(string s1)
{
    int f1[CHAR];
    fill_n(f1, CHAR, -1);

    for (int i = 0; i < s1.length(); i++)
    {
        if (f1[s1[i]] == -1)
        {
            f1[s1[i]] = i;
        }
        else
        {
            f1[s1[i]] = -2;
        }
    }
    int res = INT_MAX;

    for (int i = 0; i < CHAR; i++)
    {
        if (f1[i] >= 0)
        {
            res = min(res, f1[i]);
        }
    }
    return res;
}

int main()
{
    string s1 = "geeksforgeeks";

    cout << leftmost(s1) << endl;
    cout << left(s1) << endl;
    // cout << visit(s1) << endl;
    cout << non(s1) << endl;

    int hello[5] = {2};

    return 0;
}