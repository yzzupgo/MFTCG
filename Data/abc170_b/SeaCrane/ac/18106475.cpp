#include<bits/stdc++.h>
using namespace std;
int main(){
double X, Y;
cin >> X >> Y;
double x = (4 * X - Y) / 2;
double y = (-2 * X + Y) / 2;
if (floor(x) == x && floor(y) == y && x >= 0 && y >= 0){
cout << "Yes";
}else{
cout << "No";
}
return 0;
}
