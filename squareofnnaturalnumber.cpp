#include<bits/stdc++.h>
using namespace std;
int square(int num) {
return num * num;
}
void firstNSquares(int n) {
for(int i = 1; i <= n; ++i) {
cout << i << " " << square(i) << endl;
}
}
int main() {
int n;
cout<<"enter a number:";
cin >> n;
firstNSquares(n);

}