#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return; //base case
    cout<<n<<endl; //kaam
    print(n-1); //recursive call
}
int main(){
    print(9);
}