#include<bits/stdc++.h>
#define pb push_back
#define f first
#define s second
#define pi acos(-1.0)
#define mod 1000000007
#define test int t; cin>>t ;while(t--)
typedef long long ll;
using namespace std;
int main()
{
ll a,b;
cin>>a>>b;
if(a>=13)
cout<<b;
if(a>=6&&12>=a)
cout<<b/2;
if(a<=5)
cout<<0<<endl;;
return 0;
}
