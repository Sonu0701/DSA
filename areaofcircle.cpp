#include <bits/stdc++.h>
using namespace std;
double area(int radius) {
return 3.14 * radius * radius;
}
int main() {
int radius;
cout<<"enter radius :";

cin >> radius;
cout << "Area of the circle is: " << area(radius) << " units square";


}