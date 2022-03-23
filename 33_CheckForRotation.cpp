#include <bits/stdc++.h>
using namespace std;
// O(n)

bool areRotation(string s, string s1)
{
    if (s.length() != s1.length())
        return false;

    return ((s + s).find(s1) != string::npos);
}

int main()
{

    string s = "ABCD";

    string s1 = "EFGH";
    int i;
    int j = 0;
    while (j < s.length())
    {

        char ch = s[0];
        for (i = 1; i < s.length(); i++)
        {
            // ch = s[0];
            s[i - 1] = s[i];
        }
        s[i - 1] = ch;

        if (s == s1)
        {
            cout << "YES" << endl;
            break;
        }
        else if (j == s.length() - 1)
        {
            cout << "NO" << endl;
        }
        // cout << s;
        j++;
    }
    cout << areRotation(s, s1);

    return 0;
}