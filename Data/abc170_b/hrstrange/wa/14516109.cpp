#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
string ans = "No";
for (int a = 1; a < x; a++){
int b = x - a;
if (2 * a + 4 * b == y){
ans = "Yes";
break;
}
}
cout << ans;
}
