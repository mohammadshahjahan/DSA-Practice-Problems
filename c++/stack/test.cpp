#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
int poww(int b,int a){
    long long m=1;  
    while(a--){
        m*=b;
    }
    return m;
}
int Evaluate(int a,int b,char op){
    switch(op){
        case '+': return a+b;
        case '*': return a*b;
        case '-': return a-b;
        case '&': return a&b;
        case '^': return poww(a,b);
        default : return a/b;
    }
}
int main(){
    string s;
    cin>>s;
    stack <int> st;
    char symb;
    int i=0;
    
    while(s[i]!='\0'){
        symb = s[i];
        if(s[i]>='0'&&s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            int x = Evaluate(b,a,symb);
            st.push(x);
        }
        i++;
    }
    
    cout<<st.top()<<endl;
    return 0;
}