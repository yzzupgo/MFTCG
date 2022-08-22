#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define pi 3.141592653589793238
#define MOD 1000000007
#define int long long
#define vi vector<long long int>
#define pb push_back
#define rep(i,a,n) for (int i=(a);i<(n);++i)
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
mt19937 gen_rand_int(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 gen_rand_ll(chrono::steady_clock::now().time_since_epoch().count());
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
vector<int>vec;
long long power(long long a, long long b, long long m)
{
long long res = 1;
while (b > 0)
{
if (b & 1)
res = res * a % m;
a = a * a % m;
b >>= 1;
}
return res;
}
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(0);
#ifndef ONLINE_JUDGE
if (fopen("INPUT.txt", "r"))
{
freopen("INPUT.txt", "r", stdin);
freopen("OUTPUT.txt", "w", stdout);
}
#endif
int t;
t=1;
while(t-->0){
int a,b;
cin>>a>>b;
if(b%2==1 || b<2*a || b>4*a ){
cout<<"No"<<endl;
}else cout<<"Yes"<<endl;
}
}
