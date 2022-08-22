#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sq(x) (x)*(x)
#define PI acos(-1.0)
#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;
int main()
{
int a,b;
cin>>a>>b;
if(b%2==0)
{
if(2*a>b || 4*a<b)
cout<<"No"<<nl;
else cout<<"Yes"<<nl;
}
else cout<<"No"<<nl;
return 0;
}
