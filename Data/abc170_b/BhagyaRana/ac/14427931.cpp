#include <bits/stdc++.h>
using namespace std;
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define max(a,b) (a < b ? b : a)
#define min(a,b) ((a > b) ? b : a)
#define rep(i,n) for (i = 0; i < n; ++i)
#define REP(i,k,n) for (i = k; i <= n; ++i)
#define REPR(i,k,n) for (i = k; i >= n; --i)
typedef long long ll;
#define mk(arr,n,type) type *arr=new type[n]
const int mod=1000000007;
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
void b_v_r()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}
int main()
{
b_v_r();
int x,y;
cin >> x >> y;
int b = (y-(2*x))/2;
int a = x - b;
int flag = 0;
if(y>(4*x)||(y<(2*x)))
{
cout << "No" << endl;
flag = 1;
}
if((y-(2*x))%2==0 && flag!=1)
{
cout << "Yes" << endl;
}
else
{
if(flag!=1)
cout << "No" << endl;
}
return 0;
}
