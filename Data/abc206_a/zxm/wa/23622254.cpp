#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
long long two = 2;
long long a;
cin >> n;
long long ans = (n * (n - 1)) / 2;
multiset< long long> s;
set< long long> ss;
for(long long i = 0; i < n; i++) {
cin >> a;
s.insert(a);
ss.insert(a);
}
for(auto itr = ss.begin(); itr != ss.end(); ++itr) {
long long x = *itr;
if(s.count(x) % 2 == 0) {
ans -= (s.count(x) / two * (s.count(x) - 1));
} else {
ans -= ((s.count(x) - 1) / two * s.count(x));
}
}
cout << ans;
}
