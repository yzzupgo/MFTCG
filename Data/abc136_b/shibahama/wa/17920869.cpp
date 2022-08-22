#include <bits/stdc++.h>
#include <vector>
#define rep(i,l,r) for(int i = l; i < r; ++i)
#define ll long long
using namespace std;
const int INF = 2000000000;
int int_keta(int n) {
int ans = 0;
while(n != 0) {
++ans;
n/=10;
}
return ans;
}
int main() {
int n;
cin >> n;
int keta = int_keta(n);
int ans = 0;
while(keta != 0) {
if(keta % 2 == 0) {
--keta;
continue;
}
if(keta == int_keta(n)) {
ans += n - pow(10, keta-1);
--keta;
continue;
}
ans += pow(10, keta) - pow(10, keta-1);
--keta;
}
cout << ans << endl;
return 0;
}
