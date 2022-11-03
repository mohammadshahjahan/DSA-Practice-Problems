#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int c[100]={0};
    int i=0,j=0,k=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;i++;
        }
        else{
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;i++;j++;
            }
            else{
                c[k]=b[j];
                k++;j++;
            }
        }
    }
    while(i<n){
        c[k]=a[i];
        k++;i++;
    }
    while(j<n){
        c[k]=b[j];
        k++;j++;
    }
    for(int g=0;g<k;g++){
        cout<<c[g]<<" ";
    }
    return 0;
}