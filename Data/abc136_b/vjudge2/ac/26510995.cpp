#include<set>
#include<iostream>
using namespace std;
#define pb push_back
#define ll long long
#define lli long long int
#define s second
#define mp make_pair
#define I insert
#define endl '\n'
#define pob pop_back
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(a,b) for(ll i=a;i<b;i++)
#define loopr(a,b) for(ll i=a-1;i>=b;i--)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define rev_sort(a) sort(a.begin(),a.end(),greater<>())
#define reverse(a) reverse(a.begin(),a.end())
#define mem(a,b) memset(a, b, sizeof(a) )
#define max_ele(a,n) *max_element(a,a+n)
#define min_ele(a,n) *min_element(a,a+n)
#define print(a,n) for(ll i=0;i<n;i++)cout<<a<<" ";
#define pll pair <ll, ll>
ll M = 1000000007;
ll fact(ll n)
{
if(n>=1) return (n*fact(n-1))%M;
else return 1;
}
int main(){
ll t; t=1;
while(t--)
{
ll k,n,m,j,mx1=0,mx=0,d,mn,i,res,temp=0,tmp1,tmp2,ii,nn,f,sum=0,c,e,x,y;
cin>>n;
if(n>=9)sum+=9;
else sum+=n;
if(n>=999)sum+=900;
else if(n>=100) sum+=(n-99);
if(n>=99999)sum+=90000;
else if(n>=10000)sum+=(n-9999);
cout<<sum<<endl;
}
}
