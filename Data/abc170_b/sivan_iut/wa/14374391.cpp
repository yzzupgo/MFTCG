#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define read freopen("blue.txt","r",stdin);
#define write freopen("red.txt","w",stdout);
using ll=long long;
using ull=unsigned long long;
const double pi = 2*acos(0.0);
int main()
{
fastio;
long long x,y;
cin>>x>>y;
if(y%2==0 && y>=2*x)
cout<<"YES";
else
cout<<"NO";
return 0;
}
