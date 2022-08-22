#include <bits/stdc++.h>
typedef long long ll;
#define PI acos(-1)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define all(a) (a).begin(), (a).end()
#define clr(a,h) memset(a, (h), sizeof(a))
#define F first
#define S second
#define fore(i,b,e) for(int i=(int)b,o_o=e;i<(int)o_o;++i)
#define forr(i,b,e) for(int i=(int)b,o_o=e;i<(int)o_o;++i)
#define deb(x) cerr << "# " << (#x) << " = " << (x) << endl;
#define sz(x) (int)x.size()
#define endl '\n'
int faster_in(){int r=0,c;for(c=getchar();c<=32;c=getchar());if(c=='-') return -faster_in();for(;c>32;r=(r<<1)+(r<<3)+c-'0',c=getchar());return r;}
using namespace std;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<ll> vll;
const int INF = numeric_limits<int>::max() / 4;
int main()
{
std::ios::sync_with_stdio(false); cin.tie(0);
int a, b;
cin >> a >> b;
int res = a+b;
res = max(res, a-b);
res = max(res, a*b);
cout << res<< endl;
return 0;
}
