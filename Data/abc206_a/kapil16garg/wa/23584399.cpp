#include <bits/stdc++.h>
#include <bitset>
#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;
#define ll long long
#define ld double
#define ff first
#define ss second
#define uint unsigned int
#define ull unsigned long long
#define lol cout<<"************\n";
#define lol1 cout<<"########\n";
#define deb(a) cout<<" :: "<<#a<<" = "<<a<<endl
#define deb2(a,b) cout<<" :: "<<#a<<" = "<<a<<" :: "<<#b<<" = "<<b<<endl
#define deb3(a,b,c) cout<<" :: "<<#a<<" = "<<a<<" :: "<<#b<<" = "<<b<<" :: "<<#c<<" = "<<c<<endl
#define deb4(a,b,c,d) cout<<" :: "<<#a<<" = "<<a<<" :: "<<#b<<" = "<<b<<" :: "<<#c<<" = "<<c<<" :: "<<#d<<" = "<<d<<endl
#define PI acos(-1)
#define dsin(degree) sin(degree*(PI/180.0))
#define dcos(degree) cos(degree*(PI/180.0))
#define dtan(degree) tan(degree*(PI/180.0))
#define lp for(int i=0;i<n;i++)
#define lp1 for(int i=1;i<=n;i++)
#define dlp for(int i=0;i<n;i++) for(int j=0;j<n;j++)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPN(i,n,beg) for(int i=(beg);i<(n);++i)
#define its set<int>::iterator
#define itmp map<ll,ll>::iterator
#define mploop(mp) for(it = (mp).begin();it!=(mp).end();++it)
#define tp tuple<ll,ll,ll>
#define ar array
#define pb push_back
#define mktp make_tuple
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<vvvll> vvvvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<vvc> vvvc;
typedef vector<pair<long long, long long> > vpll;
typedef vector<vector<pair<ll, ll> > > vvpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define ps(n,points) cout<<fixed<<setprecision(points)<<n<<endl
#define dist(it,vect) distance(vect.begin(),it)
#define pq priority_queue<int>
#define pqa priority_queue<int,vector<int>,greater<int>>
#define ALL(t) (t).begin(),(t).end()
#define CLR(a) memset((a),0,sizeof(a))
#define sort_v(v) sort(v.begin(),v.end());
#define sort_a(a) sort(a,a+n);
#define rev(x) reverse(ALL(x))
#define in(x) ll x;cin>>x;
#define inst(str) string str;cin>>str;
#define out(x) cout<<x<<endl;
#define gcd(m,n) __gcd(m, n)
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define min3(a,b,c) min(min(a, b), c)
#define min4(a,b,c,d) min(min(a, b), min(c, d))
#define max3(a,b,c) max(max(a, b), c)
#define max4(a,b,c,d) max(max(a, b), max(c, d))
ull countBits(ull n) {
ull count = 0;
while(n) {
count++;
n >>= 1;
}
return count;
}
int b1[] = {0, 0, 1, -1};
int b2[] = {1, -1, 0, 0};
int d1[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int d2[] = {-1, 0, 1, -1, 1, -1, 0, 1};
#define endl '\n'
#define mod 1000000009
#define max_binary 1073741823 ( 1->30 times)
void solve() {
double n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll int t = 1;
while(t--) {
solve();
}
return 0;
}
