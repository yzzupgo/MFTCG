#include <bits/stdc++.h>
#define PI acos(-1)
#define eq(x,y) (fabs((x)-(y)) < eps)
#define debug(x) cerr<<x<<endl;
#define endl "\n"
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int inf=1e9+7;
const int nmax=1e5+10;
const int eps=1e-8;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
cout.precision(10);
cout<<fixed;
int n;
cin>>n;
int m=n, c=0;
while(m!=0)
{
m/=10;
c++;
}
if(c%2==0)
c--;
if(c==1)
cout<<min(n,9)<<endl;
else if(c==3)
cout<<n-90<<endl;
else if(c==5)
cout<<n-9091<<endl;
return 0;
}
