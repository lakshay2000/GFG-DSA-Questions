#include <bits/stdc++.h>
using namespace std;

// void solve(string nums, string &ans, string output, int index)
// {
//     if (index >= nums.size())
//     {
//         // cout << output << " ";
//         ans = ans + " " + output;
//         return;
//     }

//     // exclude

//     solve(nums, ans, output, index + 1);

//     // /include

//     int element = nums[index];

//     output.push_back(element);

//     solve(nums, ans, output, index + 1);
// }

// string subsets(string &nums)
// {
//     string ans = "";

//     string output = "";

//     int index = 0;

//     solve(nums, ans, output, index);
//     return ans;
// }

void subsets(string ch, string curr, int index)
{
    if (index == ch.length())
    {
        cout << curr << " ";
        return;
    }

    // exclude
    subsets(ch, curr, index + 1);

    // include

    subsets(ch, curr + ch[index], index + 1);
}

int main()
{

    string ch = "ABC";

    string curr = "";
    int index = 0;

    subsets(ch, curr, index);

    return 0;
}