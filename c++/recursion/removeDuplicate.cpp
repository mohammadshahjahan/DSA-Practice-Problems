#include <iostream>
#include <algorithm>
using namespace std;
string removedup(string s)
{
    if (s.length() == 0)
    {
        /* code */
        return "";
    }
    char ch = s[0];
    string ans = removedup(s.substr(1));
    if (ch == ans[0])
    {
        /* code */
        return ans;
    }
    else
        return (ch + ans);
}

int main()
{
    string s;
    cin >> s;
    string b;
    b = removedup(s);
    cout << b;

    return 0;
}