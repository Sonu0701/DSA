#include<bits/stdc++.h>
using namespace std;

void display(vector<int>&a){
    for(int i=0; i<=a.size()-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

int main(){
     vector<int>v;
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);
     v.push_back(5);
     display(v);
    
     int i=0;
     int j=v.size()-1;
     while(i<=j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
     }
     display(v);
}