#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>pll;
const int N=1e7;
ll v[N+10];
ll a[N+10];
bool compare(string &a, string &b)
{
string f=a+b,c=b+a;
return f<c;
}
int main()
{
ll a,b;
cin>>a>>b;
if(a>=13)cout<<b<<endl;
else if(a>5)cout<<b/2<<endl;
else cout<<0<<endl;
}
