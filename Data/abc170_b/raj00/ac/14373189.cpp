#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define mpi map<int, int>
#define vi vector<int>
#define qi queue<int>
#define si set<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define vs vector<string>
#define pri priority_queue<int>
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007
#define For(i,n) for (int i = 0; i < n; i++)
#define Ford(i,a,b) for (int i = a; i >= b; i--)
#define Rep(i,x,y) for (int i = x; i <= y; i++)
#define mem(a,b) memset(a, b, sizeof(a))
#define fastio \
ios_base::sync_with_stdio(0); \
cin.tie(0); \
cout.tie(0)
double tick()
{
static clock_t oldt, newt = clock();
double diff = 1.0 * (newt - oldt) / CLOCKS_PER_SEC;
oldt = newt;
return diff;
}
ll fastExpo(ll a, ll n)
{
ll res = 1;
while (n)
{
if (n % 2)
res = res * a;
n /= 2;
a = a * a;
}
return res;
}
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int main()
{
int x, y, f = 0;
cin >> x >> y;
For(i, x + 1) if (i * 2 + (x - i) * 4 == y) f = 1;
if (!f)
cout << "No\n";
else
cout << "Yes\n";
cerr << "execution time is: " << tick() << "\n";
}
