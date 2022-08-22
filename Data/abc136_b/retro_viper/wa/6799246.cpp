#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ppb pop_back
#define si set <int>
#define endl '\n'
#define fr first
#define sc second
#define mii map<int ,int >
#define msi map<string,int >
#define mis map<int , string>
#define mci map<char,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define all(v) v.begin(),v.end()
#define srt(v) sort(all(v))
#define pii pair<int ,int >
#define vi vector<int >
#define vii vector<pair<int , int >>
#define vs vector<string>
#define sz(x) (int )x.size()
#define M 1000000007
#define bs binary_search
#define mp make_pair
#define sp(n) setprecision(n)
#define spl " "
#define arr(a,n) rep(i,0,n) cin>>a[i]
#define mod 998244353
#define MAXN 1000000
#define f(n) for(int i=0;i<n;i++)
using namespace std;
signed main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,a,b=0,c;
cin>>n;
rep(i,1,7)
{
c=pow(10,i);
if(n/c==0)
{
a=i-1;
break;
}
}
cout<<a<<"\n";
if(a%2==0 )
b+=n-pow(10,a)+1;
for(int i=0;i<a;i=i+2)
b+=(9*pow(10,i));
cout<<b;
return 0;
}
