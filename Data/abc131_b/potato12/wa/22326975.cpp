#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
using ll = int64_t;
int main() {
int n, l;
cin >> n >> l;
int ans=0;
int m = 99999;
int s;
for(int i=1; i<=n; i++){
int o = l+s-1;
ans += o;
if(m>abs(o)){
m = abs(o);
s = i;
}
}
ans = ans -(l + s -1);
cout << ans;
}
