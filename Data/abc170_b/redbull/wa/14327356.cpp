#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
int main() {
int x, y;
cin >> x >> y;
int kame, sum_legs;
string ans = "No";
if (x==1){
if(y==2 || y==4){
ans = "Yes";
}
}else {
for (int i = 1;i < (x+1); ++i){
kame = x - i;
sum_legs = 2 * i + 4 * kame;
if(sum_legs == y) {
ans = "Yes";
break;
}
}
}
cout << ans << endl;
return 0;
}
