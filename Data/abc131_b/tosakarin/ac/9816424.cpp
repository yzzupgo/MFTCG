#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); i++)
#define all(v) v.begin(), v.end()
int main() {
cin.tie(nullptr);
ios::sync_with_stdio(false);
ll n, l;
cin >> n >> l;
int min = 1e5;
int eat = 1e5;
for (int i = 1; i <= n; i++) {
if (abs(l + i -1) < min) {
eat = i;
min = abs(l+i-1);
}
}
cout << ( (n-1)*(l-1) +(n*(n+1))/2 - eat) << "\n";
}
