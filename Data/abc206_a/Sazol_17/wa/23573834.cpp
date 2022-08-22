#include<bits/stdc++.h>
#define FASTIO_ ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define en '\n'
#define itr(i,n) for(ll i=0; i<n; i++)
#define itr_ab(i,a,b) for(ll i=a; i<=b; i++)
#define itrV(i,n) for(ll i=0; i<v.size(); i++)
#define fixed cout.setf(ios::fixed);
#define precise cout.precision(6);
#define Dont_Quit int main(void)
#define Avada_Kedavra return 0;
#define yes cout<<"Yes"<<'\n'
#define no cout<<"No"<<'\n'
using namespace std;
ll powmod(ll x, ll y) {
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
Dont_Quit {
FASTIO_
ll tc, n, i, j, k;
string s, t;
tc = 1;
while(tc--) {
ll a, b, c;
char ans;
cin >> a;
double d = a * 108 / 100.0;
if(d < 206) {
cout << "Yay!" << en;
} else {
cout << ":(" << en;
}
}
Avada_Kedavra
}
