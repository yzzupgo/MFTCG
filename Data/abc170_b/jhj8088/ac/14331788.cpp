#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int x, y;
string ans = "";
cin >> x >> y;
int mn = x*2, mx = x*4;
if(x == 1 && (y == 2 || y == 4)){
ans = "Yes";
}else if(y >= mn && y <= mx) {
int q = (2*x) - (y/2);
int k = x-q;
if((q+k == x) && (y == 4*k + 2*q)) {
ans = "Yes";
}else {
ans = "No";
}
}else {
ans = "No";
}
cout << ans << "\n";
return 0;
}
