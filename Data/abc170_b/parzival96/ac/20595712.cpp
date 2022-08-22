#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
typedef long long ll;
#define sc1(a) scanf("%lld",&a)
typedef unsigned long long ull;
#define rep(ii,n) for (int ii = 0; ii < (n); ++ii)
#define foR0(num) for(ll i = 0; i < num; i++)
#define forIn(arr,num) for(ll i = 0; i < num; i++) sc1(arr[i]);
#define vpnt(ans) for(ll i = 0; i < ans.size(); i++) cout << ans[i] << (i + 1 < ans.size() ? ' ' : '\n');
#define en cout << '\n';
#define no cout << "No" << '\n'
#define yes cout << "Yes" << '\n'
void solve(){
int a,b;cin>>a>>b;
for (int i = 0; i <=100; ++i)
{
for (int j = 0; j <=100; ++j)
{
int ans = i*2 + j*4;
if (ans == b && i+j==a)
{
yes;
return ;
}
}
}
no;
}
int main() {
int tc = 0;
clock_t tStart = clock();
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
tc = 1;
for (int t = 1; t <= tc; t++) {
solve();
}
#ifndef ONLINE_JUDGE
printf("\n\nRun Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
return 0;
}
