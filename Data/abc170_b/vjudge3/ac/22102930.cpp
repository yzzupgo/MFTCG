#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ii pair<int, int>
#define fi first
#define se second
#define ll long long
#define endl '\n'
#define mp make_pair
#define pb push_back
#define v1 v<<1
#define v2 (v<<1)|1
const int inf = (int)1e9;
const int mod = (int)1e9 + 7;
clock_t t1,t2;
int binpow(int a, int n){
int sum = 1;
while(n){
if (n & 1) {
sum = (sum * a) % mod;
}
a = (a * a) % mod;
n >>= 1;
}
return sum;
}
int main()
{
fastio
int x, y;
cin >> x >> y;
if(x * 4 < y){
cout << "No";
return 0;
}
if(y % 2 == 1){
cout << "No";
return 0;
}
if(x > y/2){
cout << "No";
return 0;
}
cout << "Yes";
return 0;
}
