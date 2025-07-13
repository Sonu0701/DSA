#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v ;
    v.push_back(2);
    v.push_back(4);
    v.push_back(25);
    v.push_back(2);
    int x=2;
    int inx =-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x)
            inx =i; 
            break;
    }
    cout<<inx;
}