#include <iostream>
#include <algorithm>
using namespace std;
string keypad[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadd(string s, string ans)
{
    if (s.length() == 0)
    {
        /* code */
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypad[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        /* code */
        keypadd(ros, ans + code[i]);
    }
}

int main()
{
    keypadd("34", "");

    return 0;
}