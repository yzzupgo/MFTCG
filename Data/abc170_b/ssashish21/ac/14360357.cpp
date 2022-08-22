#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0;i < (n);i++)
using ll = long long;
const ll MOD=1000000007;
const double pi=acos(-1);
int main()
{
ll X,Y; cin>>X>>Y;
rep(i,X+1)
{
ll t=X-i;
if(2*i+4*t==Y)
{
cout<<"Yes"<<endl;
return 0;
}
}
cout<<"No"<<endl;
return 0;
}
