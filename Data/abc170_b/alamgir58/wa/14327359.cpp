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
int a,b,x,y;
cin>>a>>b;
if(b%2==1 || 4*a<b || 2*a>b)
cout<<"NO"<<nl;
else cout<<"Yes"<<nl;
return 0;
}
