#include <bits/stdc++.h>
using namespace std;

void solve(string s, string &ans, int index)
{
    if (index >= s.length())
    {
        cout << ans + s << " ";
        return;
    }

    for (int i = index; i < s.length(); i++)
    {
        swap(s[index], s[i]);

        solve(s, ans, index + 1);
        swap(s[index], s[i]);
    }
}

void permute(string s)
{
    string ans = "";
    int index = 0;

    solve(s, ans, index);

    // return ans;
}

int main()
{

    string s = "ABC";

    permute(s);

    return 0;
}