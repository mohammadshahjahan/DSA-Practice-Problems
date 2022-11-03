#include <iostream>
using namespace std;
void subs(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << "{" << ans << "}" << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subs(ros, ans);
    subs(ros, ans + ch);
}
int main()
{
    string s;
    cin >> s;
    subs(s, "");
    return 0;
}




//subs(abc,"")
//  ch =a
//  ros=bc
//  subs(bc,"")
//    ch =b
//    ros=c      |  
//    sub(c,"")   <--  |                 subs(c,"b")
//      ch=c           |
//      ros=""    <--  |
//      subs("","") ---| subs("","c")      c,cb