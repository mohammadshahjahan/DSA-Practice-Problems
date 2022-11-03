#include <iostream>
#include <algorithm>
using namespace std;
void reverse(string s)
{
    int i;

    if (s.length() == 0)
    {
        /* code */
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        /* code */
        cout << "3.14";
        string rest = s.substr(2);
        reverse(rest);
    }
    else
    {
        cout << s[0];
        reverse(s.substr(1));
    }
}

int main()
{
    string s;
    cin >> s;

    reverse(s);

    return 0;
}