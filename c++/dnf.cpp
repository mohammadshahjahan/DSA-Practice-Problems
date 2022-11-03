#include <iostream>
#include <algorithm>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void dnf(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        /* code */
        if (arr[mid] == 0)
        {
            /* code */
            swap(arr, low, mid);
            mid++, low++;
        }
        else if (arr[mid] == 1)
        {
            /* code */
            mid++;
        }
        else
        {
            swap(arr, mid, high);
            high--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    dnf(arr, n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}