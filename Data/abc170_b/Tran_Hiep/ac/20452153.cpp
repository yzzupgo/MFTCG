#include <bits/stdc++.h>
#define f(i,x,y) for(int i=x; i<=y; ++i)
#define fn(i,x,y) for(int i=x; i>=y; --i)
using namespace std;
int a, b, p,m, n, t;
int main()
{
ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
cin >>n >>m;
a=(m-2*n)/2;
if((n-a)>=0 && a>=0 && m%2==0) cout <<"Yes";
else cout <<"No";
return 0;
}
