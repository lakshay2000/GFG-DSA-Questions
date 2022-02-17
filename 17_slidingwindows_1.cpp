#include <iostream>
using namespace std;

bool slidingwindow(int *arr, int n, int sum)
{
    int curr_sum = arr[0];
    int s = 0;

    for (int e = 1; e < n; e++)
    {

        while (curr_sum > sum && s < e - 1)
        {
            curr_sum -= arr[s];
            s++;
        }
        if (curr_sum == sum)
        {
            return true;
        }
        if (e < n)
            curr_sum += arr[e];
    }
    return curr_sum == sum;
}

int main()
{

    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = 6;
    int sum = 15;

    if (slidingwindow(arr, n, sum))
    {
        cout << "Sum hai bhai" << endl;
    }
    else
    {
        cout << "Nahi hai" << endl;
    }

    return 0;
}