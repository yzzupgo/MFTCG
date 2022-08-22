#include <bits/stdc++.h>
#define rep(i,a,b) for ( ll i = (a); i <= (b); ++ i )
#define ll long long
using namespace std;
const int N = 1e6 + 10;
ll q[N];
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n;
scanf("%d", &n);
rep(i, 1, n) {
scanf("%lld", &q[i]);
}
sort(q + 1, q + n + 1);
int res = 0;
rep(i, 1, n - 1) {
rep(j, i + 1, n) {
if(q[i] != q[j]) {
res ++;
}
}
}
printf("%d", res);
return 0;
}
