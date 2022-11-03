#include <iostream>
#include <algorithm>
using namespace std;
int firstoccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        /* code */
        return -1;
    }
    if (arr[i] == key)
    {
        /* code */
        return i;
    }
    return firstoccurence(arr, n, i + 1, key);
}
int lastoccurence(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        /* code */
        return -1;
    }
    int restarray = lastoccurence(arr, n, i + 1, key);
    if (restarray != -1)
    {
        /* code */
        return restarray;
    }
    if (arr[i] == key)
    {
        /* code */
        return i;
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << firstoccurence(arr, 5, 0, 3) << endl;
    cout << lastoccurence(arr, 5, 0, 3);

    return 0;
}