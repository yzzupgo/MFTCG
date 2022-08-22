#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<math.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define se second
#define fi first
#define in insert
#define ll long long
#define pb push_back
#define mp make_pair
#define mem(a) memset(a,0,sizeof(a))
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pll pair<ll,ll>
#define pdd pair<double,double>
#define mpll map<ll,ll>
#define mpdd map<double,double>
#define len(s) s.length()
const ll mod = 1e9 + 7;
ll pow1(ll x, ll y) {
ll res = 1;
x = x % mod;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % mod;
}
y = y >> 1;
x = (x * x) % mod;
}
return res;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
ll n;
cin >> n;
ll x = ceil(1.08 * n);
if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
return 0;
}
