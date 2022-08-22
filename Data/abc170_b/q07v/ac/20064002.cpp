#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
using ll = long long;
int main(){
int x, y;
cin >> x >> y;
int ans = 0;
for (int c = 0; c <= x; c++){
int t = x-c;
int asi = c*2 + t*4;
if (asi == y){
ans = 1;
break;
}
}
puts(ans == 1? "Yes":"No");
return 0;
}
