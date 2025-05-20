#include<iostream>
using namespace std;
int main (){
    int n,r;
    cout<<"enter n number :";
    cin>>n;
    cout<<"enter r number :";
    cin>>r;
    int nfact=1;
    for(int i =2;i<=n;i++){
        nfact=nfact*i;
    }
   
    int rfact=1;
    for(int i =2;i<=r;i++){
        rfact=rfact*i;
    }
    int nrfact=1;
    for(int i =2;i<=(n-r);i++){
        nrfact= nrfact*i;
    }
    int ncr=nfact/(rfact*nrfact);
    cout<<ncr;
    return 0;

} 