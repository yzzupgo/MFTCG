#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;
using vs = vector<string>;
using in6 = int64_t;
using ind = double;
using pii = pair<int,int>;
using psi = pair<string,int>;
using vpi = vector<pii>;
using vps = vector<psi>;
#define rep(i,n) for (in6 i = 0; i < (in6)(n); i++)
#define repa(i,a,n) for(in6 i = a; i < (in6)(n); i++)
#define repdown(i,n) for(in6 i = n; i > 0; i--)
#define kyun ios::sync_with_stdio(false)
#define hinata cout << "\n"
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define inf 2147483647
#define dset(n) cout << fixed << setprecision(n)
void yes() {
cout << "Yes";
}
void no() {
cout << "No";
}
int main() {
kyun;
int n,l;
cin >> n >> l;
vi data(n);
rep(i,n) data[i] = l + i;
int sample = 0;
rep(i,n) sample += data[i];
int ans = inf;
rep(i,n) {
int sample2 = sample - data[i];
if(abs(ans-sample) > abs(sample2-sample)) ans = sample2;
}
cout << ans;
hinata;
}
