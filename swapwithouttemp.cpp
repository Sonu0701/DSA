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
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<a<<" "<<b <<endl;

   
}