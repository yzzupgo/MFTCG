#include <bits/stdc++.h>
#define rt "\n"
#define sp " "
#define test1 cout << "test1" << endl;
#define test2 cout << "test2" << endl;
#define fixprecision(n) fixed; cout << setprecision(n)
#define kyopro ios::sync_with_stdio(false);cin.tie(NULL);
#define MOD 1000000007
#define rep(i,s,N) for(ll i{s}; i < N; i++)
#define iikae auto&
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll,ll>;
int main(){
kyopro;
ll N, L;
cin >> N >> L;
ll sum{};
if(L <= 0 && N + L - 1 >= 0);
else if(N + L - 1 < 0) sum -= N + L - 1;
else if(L > 0) sum -= L;
rep(i, L, N + L) sum += i;
cout << sum << rt;
}
