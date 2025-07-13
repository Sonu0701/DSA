#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter num of students :";
    cin>>n;
    int mark[n] ;
    cout<<"enter number of mark :";

    for(int i =0;i<=n-1;i++){
        cin>>mark[i];
    }
    for(int i =0;i<=n-1;i++){
        if(mark[i]<35){
            cout<<i<<" ";

        }
    }


}