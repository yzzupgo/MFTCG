#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
#include<iomanip>
#include<cmath>
#include<stack>
#include <chrono>
#include <random>
#include <iterator>
#include <map>
#include<list>
#include<sstream>
#include <algorithm>
#include <fstream>
#include<unordered_map>
#include<set>
#include<queue>
#define int long long
#define double long double
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pip pair<int,pii>
#define vip vector<pii>
#define vi vector<int>
#define vs vector<string>
#define vd vector<double>
#define mii map<int, int>
#define qu queue<int>
#define set set<int>
#define multiset multiset<int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b,a) for(int i=b;i>=a;i--)
#define viv vector<vi>
#define stack stack<int>
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define it iterator
#define pq priority_queue<int>
#define pq1 priority_queue <pii, vector<pii>, greater<pii> >
#define mem(x,y) memset(x, (int)y, sizeof(x))
#define ps(x,y) fixed<<setprecision(y)<<x
using namespace std;
int z = 1e9 + 7;
int gcd(int a, int b) {
if(a == 0) {
return b;
}
if(b == 0) {
return a;
}
return gcd(b, a % b);
}
int power(int a, int b) {
int res = 1;
while(b) {
if(b & 1) {
res = (res * a) % z, b--;
}
a = (a * a) % z;
b = b >> 1;
}
return res;
}
vi sv;
int fact[1000001];
int ncr(int n, int r) {
int p = fact[n];
p *= power(fact[r], z - 2);
p %= z;
p *= power(fact[n - r], z - 2);
p %= z;
return p;
}
int inv(int x) {
return power(x, z - 2);
}
int dsu(int x, int par[]) {
if(x == par[x]) {
return x;
}
return dsu(par[x], par);
}
vi pp;
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
pp.assign(1000001, 0);
for(int i = 2; i < 1000; i++) {
if(!pp[i]) {
for(int j = i * i; j <= 1000000; j += i) {
pp[j] = 1;
}
}
}
fact[0] = 1;
rep(i, 1, 1000001) fact[i] = i * fact[i - 1], fact[i] %= z;
for(int i = 2; i <= 1000000; i++) if(!pp[i]) {
sv.pb(i);
}
int t;
t = 1;
while(t--) {
double n;
cin >> n;
n *= (1.08);
int k = floor(n);
if(k < 206) {
cout << "Yay\n";
} else if(k == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
}
