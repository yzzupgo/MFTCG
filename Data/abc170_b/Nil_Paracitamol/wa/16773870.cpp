#include<bits/stdc++.h>
#include<numeric>
using namespace std;
const long double PI = 3.141592653589793238;
const double EPS = 1e-6 ;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define dd double
#define vll vector<ll>
#define vs vector<string>
#define fn(i,n) for(ll i = 0; i<n; i++)
#define f(i,a,b) for(i=a;i<b;i++)
#define f1(i,a,b) for(i=b-1;i>=a;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pls pair<ll,string>
#define vpl vector<pll>
#define pb push_back
#define mk make_pair
#define x first
#define y second
#define tt cout<<"Came here"<<endl;
void solve()
{
ll x,y;
bool flag = 0;
cin>>x>>y;
if(y%2 == 0){
if(y <= x*4)
flag = 1;
}
if(flag)
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;
}
int main()
{
IOS;
ll tc = 1;
while(tc--)
{
solve();
}
return 0;
}
