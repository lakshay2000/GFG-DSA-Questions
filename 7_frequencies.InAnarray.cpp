#include <iostream>
using namespace std;

void frequencies(int *arr, int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
            if (i == n - 1)
            {
                cout << arr[i] << " " << count << endl;
            }
        }
        else
        {
            cout << arr[i - 1] << " " << count << endl;
            if (i == n - 1)
            {
                cout << arr[i] << " " << count << endl;
            }
            count = 1;
        }
    }
}

int main()
{

    int arr[] = {10, 10, 10, 30, 30, 40};

    int n = 6;

    frequencies(arr, n);

    return 0;
}