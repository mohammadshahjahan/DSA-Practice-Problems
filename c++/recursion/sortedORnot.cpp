#include <iostream>
#include <algorithm>
using namespace std;
bool sorted(int arr[], int n)
{
    if (n == 1) 
    {
        return true; 
    }
    bool resparry = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && resparry);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sorted(arr, 5) << endl;

    return 0;
}