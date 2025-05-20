#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    for(int i=1 ;i<=n ;i++){
        int f =1;
        for(int j=2;j<=i; j++){
            f =f*j;

        }
        cout<<f<<endl;

    }

}
