#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
#define Fio \
ios_base::sync_with_stdio(false); \
cin.tie(nullptr); \
cout.tie(nullptr)
#define ll long long int
#define fo(i,a,b) for (long long int i = a; i <= b; i++)
#define w(t) \
int t; \
cin >> t; \
while (t--)
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vl vector<long long int>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long int>>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define mll map<ll,ll>
#define umll unordered_map<ll,ll>
#define newl cout<<"\n"
#define pb push_back
#define mp make_pair
#define fi first
#define se second
const ll inf = 1e9 + 7;
const ll mod = 1e9 + 7 ;
#define MAX 200010
void call_priyanshu() {
Fio;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
ll mini(ll a, ll b) {
if(a >= b) {
return b;
}
return a;
}
ll maxi(ll a, ll b) {
if(a >= b) {
return a;
}
return b;
}
void solve() {
long double n;
cin >> n;
long double ans = n * 1.08;
ll a = int(ans);
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
int main() {
call_priyanshu();
solve();
return 0;
}
