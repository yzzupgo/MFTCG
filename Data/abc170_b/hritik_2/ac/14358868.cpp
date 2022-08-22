#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo(i,n) for(int i=0;i<n;i++)
#define rfo(i,n) for(int i=n-1;i>=0;i--)
#define Ull unsigned long long
#define pb push_back
#define F first
#define S second
#define INF 2e16
#define PI acos(-1.0)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define SQR(a) ((a)*(a))
#define MEM(a,x) memset(a,x,sizeof(a))
#define ABS(x) ((x)<0?-(x):(x))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define FastRead ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define tr(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x,y) cout << #x << "=" << x << "," << #y << "=" << y << endl
const int N = 2;
const ll MOD = 1e9 + 7;
ll dx[4] = { -1, 1, 0, 0};
ll dy[4] = {0, 0, 1, -1};
bool comp(const pll &p1, const pll &p2)
{
if (p1.first == p2.first)
return p1.second > p2.second;
else
return p1.first > p2.first;
}
bool isPrime(ll x)
{
if (x < 2)
return false;
if (x <= 3) return true;
if (x % 2 == 0 || x % 3 == 0) return false;
for (ll i = 5; i <= sqrt(x); i += 6)
{
if (x % i == 0 || x % (i + 2) == 0)
return false;
}
return true;
}
bool vis[1000001];
void Solve()
{
ll x, y;
cin >> x >> y;
if (y % 2 == 0)
{
if (y >= 2 * x && y <= 4 * x)
cout << "Yes" << "\n";
else
cout << "No" << "\n";
}
else
cout << "No" << "\n";
}
int main()
{
FastRead;
int T = 1;
while (T--)
{
Solve();
}
return 0;
}
