#include <bits/stdc++.h>
using namespace std;

int CHAR = 256;

bool isSame(int CP[], int CT[])
{
    for (int i = 0; i < CHAR; i++)
    {
        if (CP[i] != CT[i])
        {
            return false;
        }
    }
    return true;
}

bool ispresent(string txt, string pat)
{
    int CT[CHAR] = {0};
    int CP[CHAR] = {0};

    for (int i = 0; i < pat.length(); i++)
    {
        CP[pat[i]]++;
        CT[txt[i]]++;
    }

    for (int i = pat.length(); i < txt.length(); i++)
    {
        if (isSame(CP, CT))
        {
            return true;
        }
        CT[txt[i]]++;
        CT[txt[i - pat.length()]]--;
    }

    return false;
}

int main()
{
    string txt = "geeksforgeeks";
    string pat = "frog";

    cout << ispresent(txt, pat);

    return 0;
}