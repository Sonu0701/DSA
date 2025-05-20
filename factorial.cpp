#include<iostream>
using namespace std;


int fact (int a){
    int f =1;
    for(int i=2; i<=a; i++){
        f = f*i;
    }
    return f;

}

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1 ;i<=n ;i++){
        cout<<fact(i)<<endl;

    }

}
