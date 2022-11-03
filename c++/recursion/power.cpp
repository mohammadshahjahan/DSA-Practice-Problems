#include <iostream>
#include <algorithm>
using namespace std;
int power(int n, int p)
{
    if (n == 0)
    {
        return 1;
    }
    return p * power(n - 1, p);
}
int main()
{
    int n, p;
    cin >> n >> p;
    cout << power(p, n) << endl;

    return 0;
}