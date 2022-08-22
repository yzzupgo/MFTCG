#include<iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
#define ll long long
#define fi first
#define se second
#define pri pair<ll,ll>
#define M 1000000007
#define pb(x) push_back(x)
#define mpr(x,y) make_pair(x,y)
#define wl(t) int t;cin>>t;while(t--)
#define krish ios::sync_with_stdio(0),cout.tie(0),cin.tie(0)
#define vec vector<ll>
#define inf 3e18
#define ld long double
bool bysec(pri a, pri b) {
return (a.se < b.se);
}
bool bysecriv(pri a, pri b) {
return (a.se > b.se);
}
bool byrev(pri a, pri b) {
return (a.fi > a.fi);
}
bool rev(int a, int b) {
return (a > b);
}
void print(vec a) {
for(int i = 0; i < a.size(); i++) {
cout << a[i] << " ";
}
cout << endl;
}
void chal() {
cout << "chal rha hun" << endl;
}
long long power(long long x, long long y) {
int res = 1;
x = x % M;
if(x == 0) {
return 0;
}
while(y > 0) {
if(y & 1) {
res = (res * x) % M;
}
y = y >> 1;
x = (x * x) % M;
}
return res;
}
int main() {
krish;
{
double n;
cin >> n;
long long x = (n * 1.08);
if(x < 206) {
cout << "Yey!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
return 0;
}
