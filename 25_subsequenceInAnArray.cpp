#include <iostream>
#include <string>

using namespace std;

bool subsequence(string &s1, string &s2)
{
    int i = 0;
    int j = 0;

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    if (j == s2.length())
    {
        // cout << i;
        return true;
    }
    else
    {
        return false;
    }
}

bool subsequ(string &s1, string &s2, int n, int m)
{

    if (m == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }

    if (s1[n - 1] == s2[m - 1])
    {
        return (s1, s2, n - 1, m - 1);
    }
    else
    {
        return (s1, s2, n - 1, m);
    }
}

int main()
{
    string s1 = "GEEKSFORGEEKS";

    string s2 = "GRGE";

    cout << subsequence(s1, s2) << endl;

    cout << subsequ(s1, s2, s1.length(), s2.length());

    return 0;
}