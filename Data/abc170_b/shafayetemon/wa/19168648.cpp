#include<bits/stdc++.h>
using namespace std;
#define BeatMeScanf ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define w(x) int x; cin >> x; while(x--)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define mii map<int,int>
#define inf 1<<28
#define f(i,j,n) for(int i = j; i < n; i++)
#define fu(i,j,n) for(int i = j; i > n; i--)
#define gcd(a,b) __gcd(a,b)
#define mem(x,y) memset(x, y, sizeof(x))
#define ps(x,y) fixed<<setprecision(y)<<x
#define show(val) cout<< #val << " -> " << val << endl
#define Case cout<< "Case "<< ++cs << ": "
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pi acos(-1)
#define eps 1e-9
#define MOD 1000000007
#define MAX 100005
int main()
{
BeatMeScanf;
int x, y;
cin >> x >> y;
string ans = "No";
for(int i = 1; i<= x; i++)
{
int j = x - i;
if((2*i)+(4*j) == y) ans = "Yes";
}
cout << ans << '\n';
return 0;
}
