#include<bits/stdc++.h>
using namespace std;
int main(){
    int tar;
    cout<<"enter target element :";
    cin>>tar;
    vector<int>v;
    int n;
    cout<<"enter size of vector :";
    cin>>n;
    cout<<"enter element of vector :";
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        v.push_back(r);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==tar){
                cout<<"("<<i<<" "<<j<<")"<<endl;
            }
        }
    }
}