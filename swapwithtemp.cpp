#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number :";
    cin>>a ;   
    int b;
    cout<<"enter b number :";
    cin>>b ; 

    cout<<a<<" "<<b <<endl;
    
    int temp;
    temp =a;
    a=b;
    b=temp;
     cout<<a<<" "<<b ;
    
   
}