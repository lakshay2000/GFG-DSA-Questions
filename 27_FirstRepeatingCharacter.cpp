#include <bits/stdc++.h>
using namespace std;
const int CHAR = 256;
// O(n^2)
int leftmost(string s1)
{
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = i + 1; j < s1.length(); j++)
        {
            if (s1[i] == s1[j])
            {
                return i;
            }
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
        if (count[s1[i]] > 1)
        {
            return i;
        }
    }
    return -1;
}

int visit(string s1)
{

    bool visit[CHAR] = {false};

    int res = -1;
    for (int i = s1.length(); i >= 0; i--)
    {
        if (visit[s1[i]])
        {
            res = i;
        }
        else
        {
            visit[s1[i]] = true;
        }
    }
    return res;
}

int main()
{
    string s1 = "abccb";

    cout << leftmost(s1) << endl;
    cout << left(s1) << endl;
    cout << visit(s1) << endl;

    return 0;
}