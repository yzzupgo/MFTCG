#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define fi first
#define se second
#define endl "\n"
#define all(v) v.begin(),v.end()
#define fastio ios::sync_with_stdio(0); std::cin.tie(0); std::cout.tie(0)
#define go_t int t;cin>>t;for(int tt=1;tt<=t;tt++)
#define set_ar(arr,v) memset(arr,v,sizeof(arr))
#define trace2(x,y) cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define trace3(x,y,z) cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a,b,c,d) cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a,b,c,d,e) cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;
typedef pair<int,int>pi;
typedef pair<ll,ll>pl;
const ll inf = 0x3f3f3f3f3f3f3f3fll;
const int N = 300000 , mod = 1000000007;
int main()
{
fastio;
int x,y;
cin>>x>>y;
int b = 2*x - y;
if(b&1)
{
cout<<"No"<<endl;
return 0;
}
b/=2;
int a = x - b;
if(a>=0 && b>=0)
{
cout<<"Yes"<<endl;
}
else cout<<"No"<<endl;
return 0;
}
