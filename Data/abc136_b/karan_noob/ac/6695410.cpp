#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(int i=start;i<end;i++)
#define N 100001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl;
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<endl;
#define pi M_PI
int main()
{
fastio();
int n;cin>>n;
if(n<10)
{
cout<<n;
}
else if(n<100)
{
cout<<9;
}
else if(n<1000)
{
cout<<10+(n-100);
}
else if(n<10000)
{
cout<<909;
}
else if(n<100000)
{
cout<<910+(n-10000);
}
else
cout<<90909;
return 0;
}
