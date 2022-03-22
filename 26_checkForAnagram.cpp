#include <bits/stdc++.h>

using namespace std;

const int CHAR = 256;

bool anagram(string &s1, string &s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    int i = 0;
    int j = 0;

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] != s2[j])
        {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

bool ana(string &s1, string &s2)
{
    if (s1.length() != s2.length())
    {
        return false;
    }

    int count[CHAR] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }

    for (int i = 0; i < s1.length(); i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "abaac";
    string s2 = "caaab";

    cout << anagram(s1, s2);
    cout << ana(s1, s2);
    return 0;
}