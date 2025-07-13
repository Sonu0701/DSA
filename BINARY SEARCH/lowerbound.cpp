#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,8,9,10};
    int n = 7;
    int x = 7;

    // simple linear search
    // for(int i = 0;i<n;i++){  
    //     if(arr[i]>x){
    //         cout<<arr[i-1];
    //         break;
    //     }
    // }

    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag == false) cout<<arr[high];
}