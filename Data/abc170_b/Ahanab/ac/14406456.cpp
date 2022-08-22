#include<bits/stdc++.h>
#define fios ios_base::sync_with_stdio(false); cin.tie(0);
#define sf(x) scanf("%d",&x)
#define sfl(x) scanf("%lld",&x)
#define pf(x) printf("%d\n",x)
#define pfl(x) printf("%lld\n",x)
#define ll long long
#define nl "\n"
#define PB(x) push_back(x)
#define For(i,n) for(int i=0; i<n; i++)
#define PI acos(-1)
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
if(y%2==0)
{
if(x*2<=y && x*4>=y)
cout<<"Yes"<<nl;
else
cout<<"No"<<nl;
}
else
cout<<"No"<<nl;
return 0;
}
