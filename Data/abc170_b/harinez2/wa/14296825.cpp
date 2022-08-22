#include <bits/stdc++.h>
#define vecprint(v) rep(i,v.size())cout << v[i] << " ";cout << endl;
#define setprint(s) for(auto i=s.begin();i!=s.end();i++)cout << *i << " ";cout << endl;
#define mappairprint(s) for(auto i=s.begin();i!=s.end();i++)cout << i->first << " " << i->second << endl;cout << endl;
#define r1(a) cin>>(a)
#define r2(a,b) cin>>(a)>>(b)
#define r3(a,b,c) cin>>(a)>>(b)>>(c)
#define w1(a) cout<<(a)<<" "
#define w2(a,b) cout<<(a)<<" "<<(b)<<" "
#define w3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<" "
#define wl1(a) cout<<(a)<<endl
#define wl2(a,b) cout<<(a)<<" "<<(b)<<endl
#define wl3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
#define pll pair<ll,ll>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep1(i,n) for (int i = 1; i <= (n); ++i)
#define all(c) c.begin(),c.end()
#define elif else if
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
using namespace std;
using ll = long long;
constexpr double PI = 3.141592653589793238462643383279;
vector<int> dx = {1, 0, -1, 0}, dy = {0, 1, 0, -1};
int main() {
int x,y;
cin >> x >> y;
if(x <= y && x*4 >= y && y%2 == 0) cout << "Yes" << endl;
else cout << "No" << endl;
}
