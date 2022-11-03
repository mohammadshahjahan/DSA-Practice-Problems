#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int dest = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum > k)
                break;
            if (sum == k)
            {
                int len = j - i + 1;
                if (len > dest)
                {
                    dest = len;
                }
            }
        }
    }
    cout << dest << endl;
    return 0;
}





        
        