#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0;i < (n);i++)
using namespace std;
int main () {
int n, l;
cin >> n >> l;
int ans = l;
if(l > 0) {
for(int i=2;i<=n;i++) {
ans += l+i-1;
}
}
else {
for(int i=1;i<n;i++) {
if(l+i-1 == 0) {
cout << "0";
return 0;
}
ans += l+i-1;
}
}
cout << ans;
}
