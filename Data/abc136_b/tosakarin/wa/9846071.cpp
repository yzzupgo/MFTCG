#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
int count(int x) {
int y = 0;
while(x > 0) {
x /= 10;
y++;
}
return y;
}
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
ll n;
cin >> n;
ll cnt = 0;
rep (i, n) {
if (count(i) %2 == 1)
cnt++;
}
cout << cnt << "\n";
}
