#include <iostream>
using namespace std;
long long stofib(int n,int DAT[]){
    
    if(n==0){
        DAT[0]=0; 
    }
    else if(n==1){
        DAT[1]= 1;
    }
    else
        if(DAT[n]==0)
            DAT[n]= stofib(n-1,DAT)+ stofib(n-2,DAT);
    return DAT[n];
    
   
}
int main(){
    long long n ; cin>>n;
    int DAT[n]={0}; 
    for(int i =0;i<n;i++){
        cout<<stofib(i,DAT)<<" ";
    }
    return 0;
}