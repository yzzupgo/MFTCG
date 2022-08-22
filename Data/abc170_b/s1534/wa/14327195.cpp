#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
int a = (4*x-y)/2;
int b = (y-2*x)/2;
if(a<0 || b<0){
cout << "No";
return 0;
}
else if(a+b == x){
cout << "Yes";
return 0;
}
}
