#include <iostream>
using namespace std;

// O(N^2)
void LeadersInanArray(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            cout << arr[i] << " ";
        }
    }
}

void LeaderInAnArray(int *arr, int n)
{
    int curr = arr[n - 1];

    cout << curr << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (curr < arr[i])
        {
            curr = arr[i];
            cout << curr << " ";
        }
    }
}

int main()
{

    int arr[] = {7, 10, 4, 3, 6, 5, 2};

    int n = 7;

    // solve(arr, n);

    LeadersInanArray(arr, n);
    cout << endl;
    LeaderInAnArray(arr, n);

    return 0;
}