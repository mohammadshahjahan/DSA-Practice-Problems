#include <iostream>
using namespace std;
int main(){
    int c[100]={0};    
    int n;cin>>n;
    int a[n];int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        c[b[i]]++;   
    }
    for(int i=0;i<100;i++){
        if(c[i]>1)cout<<i<<" ";
    }
    return 0;
}