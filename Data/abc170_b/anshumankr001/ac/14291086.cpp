#include <bits/stdc++.h>
#define IOS {ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl "\n"
#define int long long int
#define f(i,a,b) for(int i=a; i<b; i++)
#define fb(i,a,b) for(int i=a; i>=b; i--)
#define pb push_back
#define fi first
#define se second
#define vi vector <int>
#define pi pair <int, int>
#define S(x) (int) x.size()
#define LB lower_bound
#define UB upper_bound
#define fp(x,y) fixed<<setprecision(y)<<x
#define M 100005
#define mod 1000000007
#define PI 3.141592653589793238462643383279502884
using namespace std;
void solve()
{
int x, y;
cin>>x>>y;
if(y >= 2*x && y <= 4*x && y%2 == 0) cout<<"Yes";
else cout<<"No";
}
int32_t main()
{
IOS
int t = 1;
f(tno, 1, t+1)
{
solve();
}
return 0;
}
