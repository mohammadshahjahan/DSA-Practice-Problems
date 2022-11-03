#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;int i ; cin>>i;
    int a[n];
    
    cout<<unsigned(&a)<<endl;
    cout<<unsigned((a+(i)))<<endl;
    cout<<unsigned(&(a[i]))<<endl;
    int m[n][i];
   
    int k =2,l = 3,x;
     x= (k-0)*(4)+l;
    cout<<unsigned(&(m[2][3]))<<endl;
    cout<<unsigned((m[0]+x));
    return 0;
}