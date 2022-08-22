#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
string ans = "No";
for (int a = 0; a < x + 1; a++){
int b = x - a;
if (2 * a + 4 * b == y){
ans = "Yes";
break;
}
}
cout << ans;
}
