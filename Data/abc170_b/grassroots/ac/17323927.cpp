#include <bits/stdc++.h>
using namespace std;
int main() {
int X, Y;
cin >> X >> Y;
string ans;
if(4*X - Y >= 0 && (4*X - Y)%2 == 0 && - 2*X + Y >= 0 && (- 2*X + Y)%2 == 0){
ans = "Yes";
} else{
ans = "No";
}
cout << ans << endl;
}
