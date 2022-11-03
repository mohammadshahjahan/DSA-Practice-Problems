#include <iostream>
#include <algorithm>
using namespace std;
void towerofhanoi(int n, char a, char b, char c)
{
    if (n == 0)
    {
        /* code */
        return;
    }
    towerofhanoi(n - 1, a, c, b);
    cout << "move " << a << "  to  " << c << endl;
    towerofhanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cin >> n;
    towerofhanoi(n, 'a', 'b', 'c');

    return 0;
}